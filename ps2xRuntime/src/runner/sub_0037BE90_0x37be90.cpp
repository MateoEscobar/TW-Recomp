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

// Function: sub_0037BE90
// Address: 0x37be90 - 0x37bfb8
void sub_0037BE90_0x37be90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037BE90_0x37be90");
#endif

    switch (ctx->pc) {
        case 0x37bebcu: goto label_37bebc;
        case 0x37bed4u: goto label_37bed4;
        case 0x37bee4u: goto label_37bee4;
        case 0x37bef8u: goto label_37bef8;
        case 0x37bf00u: goto label_37bf00;
        case 0x37bf10u: goto label_37bf10;
        case 0x37bf28u: goto label_37bf28;
        case 0x37bf30u: goto label_37bf30;
        case 0x37bf4cu: goto label_37bf4c;
        case 0x37bf58u: goto label_37bf58;
        case 0x37bf68u: goto label_37bf68;
        case 0x37bf7cu: goto label_37bf7c;
        case 0x37bf98u: goto label_37bf98;
        default: break;
    }

    ctx->pc = 0x37be90u;

    // 0x37be90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x37be90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x37be94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37be94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37be98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x37be98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x37be9c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x37be9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37bea0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x37bea0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bea4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x37bea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x37bea8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x37bea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x37beac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x37beacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x37beb0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37beb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37beb4: 0xc10311e  jal         func_40C478
    ctx->pc = 0x37BEB4u;
    SET_GPR_U32(ctx, 31, 0x37BEBCu);
    ctx->pc = 0x37BEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BEB4u;
    // 0x37beb8: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C478u, 0x37BEB4u, 0x37BEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BEBCu;
label_37bebc:
    // 0x37bebc: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x37BEBCu;
    {
        const bool branch_taken_0x37bebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37BEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BEBCu;
        // 0x37bec0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bebc) {
            ctx->pc = 0x37BF90u;
            goto label_37bf90;
        }
    }
    ctx->pc = 0x37BEC4u;
    // 0x37bec4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x37bec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37bec8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x37bec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37becc: 0xc10311e  jal         func_40C478
    ctx->pc = 0x37BECCu;
    SET_GPR_U32(ctx, 31, 0x37BED4u);
    ctx->pc = 0x37BED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BECCu;
    // 0x37bed0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C478u, 0x37BECCu, 0x37BED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BED4u;
label_37bed4:
    // 0x37bed4: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x37BED4u;
    {
        const bool branch_taken_0x37bed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37BED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BED4u;
        // 0x37bed8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bed4) {
            ctx->pc = 0x37BF90u;
            goto label_37bf90;
        }
    }
    ctx->pc = 0x37BEDCu;
    // 0x37bedc: 0xc10314e  jal         func_40C538
    ctx->pc = 0x37BEDCu;
    SET_GPR_U32(ctx, 31, 0x37BEE4u);
    ctx->pc = 0x37BEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BEDCu;
    // 0x37bee0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C538u, 0x37BEDCu, 0x37BEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BEE4u;
label_37bee4:
    // 0x37bee4: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x37BEE4u;
    {
        const bool branch_taken_0x37bee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37BEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BEE4u;
        // 0x37bee8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bee4) {
            ctx->pc = 0x37BF90u;
            goto label_37bf90;
        }
    }
    ctx->pc = 0x37BEECu;
    // 0x37beec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x37beecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37bef0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37BEF0u;
    SET_GPR_U32(ctx, 31, 0x37BEF8u);
    ctx->pc = 0x37BEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BEF0u;
    // 0x37bef4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37BEF0u, 0x37BEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BEF8u;
label_37bef8:
    // 0x37bef8: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x37BEF8u;
    SET_GPR_U32(ctx, 31, 0x37BF00u);
    ctx->pc = 0x37BEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BEF8u;
    // 0x37befc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x37BEF8u, 0x37BF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BF00u;
label_37bf00:
    // 0x37bf00: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x37bf00u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x37bf04: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37bf04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bf08: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x37bf08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bf0c: 0x0  nop
    ctx->pc = 0x37bf0cu;
    // NOP
label_37bf10:
    // 0x37bf10: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x37bf10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x37bf14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37bf14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bf18: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37bf18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37bf1c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37bf1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bf20: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x37BF20u;
    SET_GPR_U32(ctx, 31, 0x37BF28u);
    ctx->pc = 0x37BF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BF20u;
    // 0x37bf24: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x37BF20u, 0x37BF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BF28u;
label_37bf28:
    // 0x37bf28: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x37BF28u;
    SET_GPR_U32(ctx, 31, 0x37BF30u);
    ctx->pc = 0x37BF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BF28u;
    // 0x37bf2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x37BF28u, 0x37BF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BF30u;
label_37bf30:
    // 0x37bf30: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x37bf30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x37bf34: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x37bf34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x37bf38: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x37BF38u;
    {
        const bool branch_taken_0x37bf38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37BF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BF38u;
        // 0x37bf3c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bf38) {
            ctx->pc = 0x37BF10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37bf10;
        }
    }
    ctx->pc = 0x37BF40u;
    // 0x37bf40: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x37bf40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x37bf44: 0xc10334a  jal         func_40CD28
    ctx->pc = 0x37BF44u;
    SET_GPR_U32(ctx, 31, 0x37BF4Cu);
    ctx->pc = 0x37BF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BF44u;
    // 0x37bf48: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CD28u, 0x37BF44u, 0x37BF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BF4Cu;
label_37bf4c:
    // 0x37bf4c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37bf4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bf50: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x37bf50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x37bf54: 0x0  nop
    ctx->pc = 0x37bf54u;
    // NOP
label_37bf58:
    // 0x37bf58: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x37bf58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x37bf5c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x37bf5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x37bf60: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x37BF60u;
    SET_GPR_U32(ctx, 31, 0x37BF68u);
    ctx->pc = 0x37BF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BF60u;
    // 0x37bf64: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x37BF60u, 0x37BF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BF68u;
label_37bf68:
    // 0x37bf68: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x37bf68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bf6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37bf6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bf70: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37bf70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37bf74: 0xc102576  jal         func_4095D8
    ctx->pc = 0x37BF74u;
    SET_GPR_U32(ctx, 31, 0x37BF7Cu);
    ctx->pc = 0x37BF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BF74u;
    // 0x37bf78: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x37BF74u, 0x37BF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BF7Cu;
label_37bf7c:
    // 0x37bf7c: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x37bf7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x37bf80: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x37BF80u;
    {
        const bool branch_taken_0x37bf80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37BF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BF80u;
        // 0x37bf84: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bf80) {
            ctx->pc = 0x37BF58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37bf58;
        }
    }
    ctx->pc = 0x37BF88u;
    // 0x37bf88: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x37BF88u;
    {
        const bool branch_taken_0x37bf88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37BF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BF88u;
        // 0x37bf8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bf88) {
            ctx->pc = 0x37BF98u;
            goto label_37bf98;
        }
    }
    ctx->pc = 0x37BF90u;
label_37bf90:
    // 0x37bf90: 0xc0def86  jal         func_37BE18
    ctx->pc = 0x37BF90u;
    SET_GPR_U32(ctx, 31, 0x37BF98u);
    ctx->pc = 0x37BF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BF90u;
    // 0x37bf94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37BE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37BE18u, 0x37BF90u, 0x37BF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BF98u;
label_37bf98:
    // 0x37bf98: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x37bf98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37bf9c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x37bf9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37bfa0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x37bfa0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37bfa4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37bfa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37bfa8: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x37bfa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x37bfac: 0x3e00008  jr          $ra
    ctx->pc = 0x37BFACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37BFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BFACu;
        // 0x37bfb0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37BFACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37BFB4u;
    // 0x37bfb4: 0x0  nop
    ctx->pc = 0x37bfb4u;
    // NOP
    ctx->pc = 0x37bfb8u;
}
