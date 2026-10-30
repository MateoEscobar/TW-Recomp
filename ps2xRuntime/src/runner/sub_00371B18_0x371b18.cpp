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

// Function: sub_00371B18
// Address: 0x371b18 - 0x371db0
void sub_00371B18_0x371b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371B18_0x371b18");
#endif

    switch (ctx->pc) {
        case 0x371b5cu: goto label_371b5c;
        case 0x371b64u: goto label_371b64;
        case 0x371b78u: goto label_371b78;
        case 0x371b8cu: goto label_371b8c;
        case 0x371b94u: goto label_371b94;
        case 0x371ba8u: goto label_371ba8;
        case 0x371bb0u: goto label_371bb0;
        case 0x371bc4u: goto label_371bc4;
        case 0x371bccu: goto label_371bcc;
        case 0x371be0u: goto label_371be0;
        case 0x371be8u: goto label_371be8;
        case 0x371bfcu: goto label_371bfc;
        case 0x371c04u: goto label_371c04;
        case 0x371c18u: goto label_371c18;
        case 0x371c20u: goto label_371c20;
        case 0x371c34u: goto label_371c34;
        case 0x371c3cu: goto label_371c3c;
        case 0x371c58u: goto label_371c58;
        case 0x371c70u: goto label_371c70;
        case 0x371c78u: goto label_371c78;
        case 0x371c90u: goto label_371c90;
        case 0x371ca8u: goto label_371ca8;
        case 0x371cb0u: goto label_371cb0;
        case 0x371cf0u: goto label_371cf0;
        case 0x371cf8u: goto label_371cf8;
        case 0x371d04u: goto label_371d04;
        case 0x371d10u: goto label_371d10;
        case 0x371d20u: goto label_371d20;
        case 0x371d34u: goto label_371d34;
        case 0x371d48u: goto label_371d48;
        case 0x371d58u: goto label_371d58;
        case 0x371d6cu: goto label_371d6c;
        default: break;
    }

    ctx->pc = 0x371b18u;

    // 0x371b18: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x371b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x371b1c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x371b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x371b20: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x371b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x371b24: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x371b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x371b28: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x371b28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371b2c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x371b2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371b30: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x371b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x371b34: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x371b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x371b38: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x371b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x371b3c: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x371b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x371b40: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x371b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x371b44: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x371b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x371b48: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x371b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x371b4c: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x371b4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x371b50: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x371b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x371b54: 0xc102472  jal         func_4091C8
    ctx->pc = 0x371B54u;
    SET_GPR_U32(ctx, 31, 0x371B5Cu);
    ctx->pc = 0x371B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371B54u;
    // 0x371b58: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x371B54u, 0x371B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371B5Cu;
label_371b5c:
    // 0x371b5c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x371B5Cu;
    SET_GPR_U32(ctx, 31, 0x371B64u);
    ctx->pc = 0x371B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371B5Cu;
    // 0x371b60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x371B5Cu, 0x371B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371B64u;
label_371b64:
    // 0x371b64: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x371b64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x371b68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x371b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371b6c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x371b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x371b70: 0xc102488  jal         func_409220
    ctx->pc = 0x371B70u;
    SET_GPR_U32(ctx, 31, 0x371B78u);
    ctx->pc = 0x371B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371B70u;
    // 0x371b74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x371B70u, 0x371B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371B78u;
label_371b78:
    // 0x371b78: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x371b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x371b7c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x371b7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371b80: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x371b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x371b84: 0xc102472  jal         func_4091C8
    ctx->pc = 0x371B84u;
    SET_GPR_U32(ctx, 31, 0x371B8Cu);
    ctx->pc = 0x371B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371B84u;
    // 0x371b88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x371B84u, 0x371B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371B8Cu;
label_371b8c:
    // 0x371b8c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x371B8Cu;
    SET_GPR_U32(ctx, 31, 0x371B94u);
    ctx->pc = 0x371B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371B8Cu;
    // 0x371b90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x371B8Cu, 0x371B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371B94u;
label_371b94:
    // 0x371b94: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x371b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x371b98: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x371b98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371b9c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x371b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x371ba0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x371BA0u;
    SET_GPR_U32(ctx, 31, 0x371BA8u);
    ctx->pc = 0x371BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371BA0u;
    // 0x371ba4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x371BA0u, 0x371BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371BA8u;
label_371ba8:
    // 0x371ba8: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x371BA8u;
    SET_GPR_U32(ctx, 31, 0x371BB0u);
    ctx->pc = 0x371BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371BA8u;
    // 0x371bac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x371BA8u, 0x371BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371BB0u;
label_371bb0:
    // 0x371bb0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x371bb0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x371bb4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x371bb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371bb8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x371bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x371bbc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x371BBCu;
    SET_GPR_U32(ctx, 31, 0x371BC4u);
    ctx->pc = 0x371BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371BBCu;
    // 0x371bc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x371BBCu, 0x371BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371BC4u;
label_371bc4:
    // 0x371bc4: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x371BC4u;
    SET_GPR_U32(ctx, 31, 0x371BCCu);
    ctx->pc = 0x371BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371BC4u;
    // 0x371bc8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x371BC4u, 0x371BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371BCCu;
label_371bcc:
    // 0x371bcc: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x371bccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x371bd0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x371bd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371bd4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x371bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x371bd8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x371BD8u;
    SET_GPR_U32(ctx, 31, 0x371BE0u);
    ctx->pc = 0x371BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371BD8u;
    // 0x371bdc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x371BD8u, 0x371BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371BE0u;
label_371be0:
    // 0x371be0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x371BE0u;
    SET_GPR_U32(ctx, 31, 0x371BE8u);
    ctx->pc = 0x371BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371BE0u;
    // 0x371be4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x371BE0u, 0x371BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371BE8u;
label_371be8:
    // 0x371be8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x371be8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371bec: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x371becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x371bf0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x371bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371bf4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x371BF4u;
    SET_GPR_U32(ctx, 31, 0x371BFCu);
    ctx->pc = 0x371BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371BF4u;
    // 0x371bf8: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x371BF4u, 0x371BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371BFCu;
label_371bfc:
    // 0x371bfc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x371BFCu;
    SET_GPR_U32(ctx, 31, 0x371C04u);
    ctx->pc = 0x371C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371BFCu;
    // 0x371c00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x371BFCu, 0x371C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371C04u;
label_371c04:
    // 0x371c04: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x371c04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371c08: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x371c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x371c0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x371c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371c10: 0xc102472  jal         func_4091C8
    ctx->pc = 0x371C10u;
    SET_GPR_U32(ctx, 31, 0x371C18u);
    ctx->pc = 0x371C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371C10u;
    // 0x371c14: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x371C10u, 0x371C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371C18u;
label_371c18:
    // 0x371c18: 0xc10b108  jal         func_42C420
    ctx->pc = 0x371C18u;
    SET_GPR_U32(ctx, 31, 0x371C20u);
    ctx->pc = 0x371C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371C18u;
    // 0x371c1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x371C18u, 0x371C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371C20u;
label_371c20:
    // 0x371c20: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x371c20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371c24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x371c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371c28: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x371c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x371c2c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x371C2Cu;
    SET_GPR_U32(ctx, 31, 0x371C34u);
    ctx->pc = 0x371C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371C2Cu;
    // 0x371c30: 0x305600ff  andi        $s6, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x371C2Cu, 0x371C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371C34u;
label_371c34:
    // 0x371c34: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x371C34u;
    SET_GPR_U32(ctx, 31, 0x371C3Cu);
    ctx->pc = 0x371C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371C34u;
    // 0x371c38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x371C34u, 0x371C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371C3Cu;
label_371c3c:
    // 0x371c3c: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x371c3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x371c40: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x371c40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x371c44: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x371c44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x371c48: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x371c48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371c4c: 0x2ae03  sra         $s5, $v0, 24
    ctx->pc = 0x371c4cu;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 2), 24));
    // 0x371c50: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x371c50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371c54: 0x0  nop
    ctx->pc = 0x371c54u;
    // NOP
label_371c58:
    // 0x371c58: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x371c58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x371c5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x371c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371c60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x371c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x371c64: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x371c64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371c68: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x371C68u;
    SET_GPR_U32(ctx, 31, 0x371C70u);
    ctx->pc = 0x371C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371C68u;
    // 0x371c6c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x371C68u, 0x371C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371C70u;
label_371c70:
    // 0x371c70: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x371C70u;
    SET_GPR_U32(ctx, 31, 0x371C78u);
    ctx->pc = 0x371C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371C70u;
    // 0x371c74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x371C70u, 0x371C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371C78u;
label_371c78:
    // 0x371c78: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x371c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x371c7c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x371c7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x371c80: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x371C80u;
    {
        const bool branch_taken_0x371c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x371C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371C80u;
        // 0x371c84: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371c80) {
            ctx->pc = 0x371C58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_371c58;
        }
    }
    ctx->pc = 0x371C88u;
    // 0x371c88: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x371c88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371c8c: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x371c8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_371c90:
    // 0x371c90: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x371c90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x371c94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x371c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371c98: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x371c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x371c9c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x371c9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371ca0: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x371CA0u;
    SET_GPR_U32(ctx, 31, 0x371CA8u);
    ctx->pc = 0x371CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371CA0u;
    // 0x371ca4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x371CA0u, 0x371CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371CA8u;
label_371ca8:
    // 0x371ca8: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x371CA8u;
    SET_GPR_U32(ctx, 31, 0x371CB0u);
    ctx->pc = 0x371CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371CA8u;
    // 0x371cac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x371CA8u, 0x371CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371CB0u;
label_371cb0:
    // 0x371cb0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x371cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x371cb4: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x371cb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x371cb8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x371CB8u;
    {
        const bool branch_taken_0x371cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x371CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371CB8u;
        // 0x371cbc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371cb8) {
            ctx->pc = 0x371C90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_371c90;
        }
    }
    ctx->pc = 0x371CC0u;
    // 0x371cc0: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x371cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x371cc4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x371cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x371cc8: 0x8fa70034  lw          $a3, 0x34($sp)
    ctx->pc = 0x371cc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x371ccc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x371cccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x371cd0: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x371cd0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x371cd4: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x371cd4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371cd8: 0x8fa9003c  lw          $t1, 0x3C($sp)
    ctx->pc = 0x371cd8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x371cdc: 0x2e0582d  daddu       $t3, $s7, $zero
    ctx->pc = 0x371cdcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371ce0: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x371ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
    // 0x371ce4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x371ce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371ce8: 0xc044e10  jal         func_113840
    ctx->pc = 0x371CE8u;
    SET_GPR_U32(ctx, 31, 0x371CF0u);
    ctx->pc = 0x371CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371CE8u;
    // 0x371cec: 0xafb50008  sw          $s5, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113840u, 0x371CE8u, 0x371CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371CF0u;
label_371cf0:
    // 0x371cf0: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x371CF0u;
    SET_GPR_U32(ctx, 31, 0x371CF8u);
    ctx->pc = 0x371CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371CF0u;
    // 0x371cf4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x371CF0u, 0x371CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371CF8u;
label_371cf8:
    // 0x371cf8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x371cf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371cfc: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x371CFCu;
    SET_GPR_U32(ctx, 31, 0x371D04u);
    ctx->pc = 0x371D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371CFCu;
    // 0x371d00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x371CFCu, 0x371D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371D04u;
label_371d04:
    // 0x371d04: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x371d04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371d08: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x371d08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x371d0c: 0x0  nop
    ctx->pc = 0x371d0cu;
    // NOP
label_371d10:
    // 0x371d10: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x371d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x371d14: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x371d14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x371d18: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x371D18u;
    SET_GPR_U32(ctx, 31, 0x371D20u);
    ctx->pc = 0x371D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371D18u;
    // 0x371d1c: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x371D18u, 0x371D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371D20u;
label_371d20:
    // 0x371d20: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x371d20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371d24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x371d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371d28: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x371d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x371d2c: 0xc102576  jal         func_4095D8
    ctx->pc = 0x371D2Cu;
    SET_GPR_U32(ctx, 31, 0x371D34u);
    ctx->pc = 0x371D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371D2Cu;
    // 0x371d30: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x371D2Cu, 0x371D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371D34u;
label_371d34:
    // 0x371d34: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x371d34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x371d38: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x371D38u;
    {
        const bool branch_taken_0x371d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x371D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371D38u;
        // 0x371d3c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371d38) {
            ctx->pc = 0x371D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_371d10;
        }
    }
    ctx->pc = 0x371D40u;
    // 0x371d40: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x371d40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371d44: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x371d44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_371d48:
    // 0x371d48: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x371d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x371d4c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x371d4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x371d50: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x371D50u;
    SET_GPR_U32(ctx, 31, 0x371D58u);
    ctx->pc = 0x371D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371D50u;
    // 0x371d54: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x371D50u, 0x371D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371D58u;
label_371d58:
    // 0x371d58: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x371d58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371d5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x371d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371d60: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x371d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x371d64: 0xc102576  jal         func_4095D8
    ctx->pc = 0x371D64u;
    SET_GPR_U32(ctx, 31, 0x371D6Cu);
    ctx->pc = 0x371D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371D64u;
    // 0x371d68: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x371D64u, 0x371D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371D6Cu;
label_371d6c:
    // 0x371d6c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x371d6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x371d70: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x371D70u;
    {
        const bool branch_taken_0x371d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x371D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371D70u;
        // 0x371d74: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371d70) {
            ctx->pc = 0x371D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_371d48;
        }
    }
    ctx->pc = 0x371D78u;
    // 0x371d78: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x371d78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x371d7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x371d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x371d80: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x371d80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x371d84: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x371d84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x371d88: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x371d88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x371d8c: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x371d8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x371d90: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x371d90u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x371d94: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x371d94u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x371d98: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x371d98u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x371d9c: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x371d9cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x371da0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x371da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x371da4: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x371da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x371da8: 0x3e00008  jr          $ra
    ctx->pc = 0x371DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371DA8u;
        // 0x371dac: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371DB0u;
}
