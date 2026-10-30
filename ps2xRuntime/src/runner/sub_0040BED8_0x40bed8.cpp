#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0040BED8
// Address: 0x40bed8 - 0x40bfe8
void sub_0040BED8_0x40bed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040BED8_0x40bed8");
#endif

    switch (ctx->pc) {
        case 0x40beecu: goto label_40beec;
        case 0x40befcu: goto label_40befc;
        case 0x40bf04u: goto label_40bf04;
        case 0x40bf14u: goto label_40bf14;
        case 0x40bf1cu: goto label_40bf1c;
        case 0x40bf2cu: goto label_40bf2c;
        case 0x40bf34u: goto label_40bf34;
        case 0x40bf44u: goto label_40bf44;
        case 0x40bf58u: goto label_40bf58;
        case 0x40bf6cu: goto label_40bf6c;
        case 0x40bf80u: goto label_40bf80;
        case 0x40bf94u: goto label_40bf94;
        case 0x40bfa8u: goto label_40bfa8;
        case 0x40bfbcu: goto label_40bfbc;
        case 0x40bfc4u: goto label_40bfc4;
        case 0x40bfd8u: goto label_40bfd8;
        default: break;
    }

    ctx->pc = 0x40bed8u;

    // 0x40bed8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x40bed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x40bedc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x40bedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x40bee0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40bee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40bee4: 0xc0c8f7e  jal         func_323DF8
    ctx->pc = 0x40BEE4u;
    SET_GPR_U32(ctx, 31, 0x40BEECu);
    ctx->pc = 0x40BEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BEE4u;
    // 0x40bee8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323DF8u, 0x40BEE4u, 0x40BEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BEECu;
label_40beec:
    // 0x40beec: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x40beecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x40bef0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40bef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40bef4: 0xc10284a  jal         func_40A128
    ctx->pc = 0x40BEF4u;
    SET_GPR_U32(ctx, 31, 0x40BEFCu);
    ctx->pc = 0x40BEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BEF4u;
    // 0x40bef8: 0x24a583e0  addiu       $a1, $a1, -0x7C20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A128u, 0x40BEF4u, 0x40BEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BEFCu;
label_40befc:
    // 0x40befc: 0xc0c8f7e  jal         func_323DF8
    ctx->pc = 0x40BEFCu;
    SET_GPR_U32(ctx, 31, 0x40BF04u);
    ctx->pc = 0x40BF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BEFCu;
    // 0x40bf00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323DF8u, 0x40BEFCu, 0x40BF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BF04u;
label_40bf04:
    // 0x40bf04: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x40bf04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x40bf08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40bf08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40bf0c: 0xc10284a  jal         func_40A128
    ctx->pc = 0x40BF0Cu;
    SET_GPR_U32(ctx, 31, 0x40BF14u);
    ctx->pc = 0x40BF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BF0Cu;
    // 0x40bf10: 0x24a58410  addiu       $a1, $a1, -0x7BF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A128u, 0x40BF0Cu, 0x40BF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BF14u;
label_40bf14:
    // 0x40bf14: 0xc0c8f7e  jal         func_323DF8
    ctx->pc = 0x40BF14u;
    SET_GPR_U32(ctx, 31, 0x40BF1Cu);
    ctx->pc = 0x40BF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BF14u;
    // 0x40bf18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323DF8u, 0x40BF14u, 0x40BF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BF1Cu;
label_40bf1c:
    // 0x40bf1c: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x40bf1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x40bf20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40bf20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40bf24: 0xc10284a  jal         func_40A128
    ctx->pc = 0x40BF24u;
    SET_GPR_U32(ctx, 31, 0x40BF2Cu);
    ctx->pc = 0x40BF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BF24u;
    // 0x40bf28: 0x24a58428  addiu       $a1, $a1, -0x7BD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A128u, 0x40BF24u, 0x40BF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BF2Cu;
label_40bf2c:
    // 0x40bf2c: 0xc0c8f7e  jal         func_323DF8
    ctx->pc = 0x40BF2Cu;
    SET_GPR_U32(ctx, 31, 0x40BF34u);
    ctx->pc = 0x40BF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BF2Cu;
    // 0x40bf30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323DF8u, 0x40BF2Cu, 0x40BF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BF34u;
label_40bf34:
    // 0x40bf34: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x40bf34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x40bf38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40bf38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40bf3c: 0xc10284a  jal         func_40A128
    ctx->pc = 0x40BF3Cu;
    SET_GPR_U32(ctx, 31, 0x40BF44u);
    ctx->pc = 0x40BF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BF3Cu;
    // 0x40bf40: 0x24a58438  addiu       $a1, $a1, -0x7BC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A128u, 0x40BF3Cu, 0x40BF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BF44u;
label_40bf44:
    // 0x40bf44: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x40bf44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x40bf48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40bf48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40bf4c: 0x24c68450  addiu       $a2, $a2, -0x7BB0
    ctx->pc = 0x40bf4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935632));
    // 0x40bf50: 0xc102ffa  jal         func_40BFE8
    ctx->pc = 0x40BF50u;
    SET_GPR_U32(ctx, 31, 0x40BF58u);
    ctx->pc = 0x40BF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BF50u;
    // 0x40bf54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40BFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40BFE8u, 0x40BF50u, 0x40BF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BF58u;
label_40bf58:
    // 0x40bf58: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x40bf58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x40bf5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40bf5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40bf60: 0x24c68458  addiu       $a2, $a2, -0x7BA8
    ctx->pc = 0x40bf60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935640));
    // 0x40bf64: 0xc102ffa  jal         func_40BFE8
    ctx->pc = 0x40BF64u;
    SET_GPR_U32(ctx, 31, 0x40BF6Cu);
    ctx->pc = 0x40BF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BF64u;
    // 0x40bf68: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40BFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40BFE8u, 0x40BF64u, 0x40BF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BF6Cu;
label_40bf6c:
    // 0x40bf6c: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x40bf6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x40bf70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40bf70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40bf74: 0x24c68460  addiu       $a2, $a2, -0x7BA0
    ctx->pc = 0x40bf74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935648));
    // 0x40bf78: 0xc102ffa  jal         func_40BFE8
    ctx->pc = 0x40BF78u;
    SET_GPR_U32(ctx, 31, 0x40BF80u);
    ctx->pc = 0x40BF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BF78u;
    // 0x40bf7c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40BFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40BFE8u, 0x40BF78u, 0x40BF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BF80u;
label_40bf80:
    // 0x40bf80: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x40bf80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x40bf84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40bf84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40bf88: 0x24c68468  addiu       $a2, $a2, -0x7B98
    ctx->pc = 0x40bf88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935656));
    // 0x40bf8c: 0xc102ffa  jal         func_40BFE8
    ctx->pc = 0x40BF8Cu;
    SET_GPR_U32(ctx, 31, 0x40BF94u);
    ctx->pc = 0x40BF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BF8Cu;
    // 0x40bf90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40BFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40BFE8u, 0x40BF8Cu, 0x40BF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BF94u;
label_40bf94:
    // 0x40bf94: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x40bf94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x40bf98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40bf98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40bf9c: 0x24c68478  addiu       $a2, $a2, -0x7B88
    ctx->pc = 0x40bf9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935672));
    // 0x40bfa0: 0xc102ffa  jal         func_40BFE8
    ctx->pc = 0x40BFA0u;
    SET_GPR_U32(ctx, 31, 0x40BFA8u);
    ctx->pc = 0x40BFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BFA0u;
    // 0x40bfa4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40BFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40BFE8u, 0x40BFA0u, 0x40BFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BFA8u;
label_40bfa8:
    // 0x40bfa8: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x40bfa8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x40bfac: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x40bfacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x40bfb0: 0x24c68480  addiu       $a2, $a2, -0x7B80
    ctx->pc = 0x40bfb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935680));
    // 0x40bfb4: 0xc102ffa  jal         func_40BFE8
    ctx->pc = 0x40BFB4u;
    SET_GPR_U32(ctx, 31, 0x40BFBCu);
    ctx->pc = 0x40BFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BFB4u;
    // 0x40bfb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40BFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40BFE8u, 0x40BFB4u, 0x40BFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BFBCu;
label_40bfbc:
    // 0x40bfbc: 0xc0cc97e  jal         func_3325F8
    ctx->pc = 0x40BFBCu;
    SET_GPR_U32(ctx, 31, 0x40BFC4u);
    ctx->pc = 0x40BFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BFBCu;
    // 0x40bfc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3325F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3325F8u, 0x40BFBCu, 0x40BFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BFC4u;
label_40bfc4:
    // 0x40bfc4: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x40bfc4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x40bfc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40bfc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40bfcc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x40bfccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40bfd0: 0xc102ffa  jal         func_40BFE8
    ctx->pc = 0x40BFD0u;
    SET_GPR_U32(ctx, 31, 0x40BFD8u);
    ctx->pc = 0x40BFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BFD0u;
    // 0x40bfd4: 0x24c68420  addiu       $a2, $a2, -0x7BE0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40BFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40BFE8u, 0x40BFD0u, 0x40BFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BFD8u;
label_40bfd8:
    // 0x40bfd8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x40bfd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40bfdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40bfdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40bfe0: 0x3e00008  jr          $ra
    ctx->pc = 0x40BFE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40BFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40BFE0u;
        // 0x40bfe4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40BFE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40BFE8u;
}
