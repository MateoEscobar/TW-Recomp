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

// Function: sub_003F74F8
// Address: 0x3f74f8 - 0x3f7578
void sub_003F74F8_0x3f74f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F74F8_0x3f74f8");
#endif

    switch (ctx->pc) {
        case 0x3f74f8u: goto label_3f74f8;
        case 0x3f74fcu: goto label_3f74fc;
        case 0x3f7500u: goto label_3f7500;
        case 0x3f7504u: goto label_3f7504;
        case 0x3f7508u: goto label_3f7508;
        case 0x3f750cu: goto label_3f750c;
        case 0x3f7510u: goto label_3f7510;
        case 0x3f7514u: goto label_3f7514;
        case 0x3f7518u: goto label_3f7518;
        case 0x3f751cu: goto label_3f751c;
        case 0x3f7520u: goto label_3f7520;
        case 0x3f7524u: goto label_3f7524;
        case 0x3f7528u: goto label_3f7528;
        case 0x3f752cu: goto label_3f752c;
        case 0x3f7530u: goto label_3f7530;
        case 0x3f7534u: goto label_3f7534;
        case 0x3f7538u: goto label_3f7538;
        case 0x3f753cu: goto label_3f753c;
        case 0x3f7540u: goto label_3f7540;
        case 0x3f7544u: goto label_3f7544;
        case 0x3f7548u: goto label_3f7548;
        case 0x3f754cu: goto label_3f754c;
        case 0x3f7550u: goto label_3f7550;
        case 0x3f7554u: goto label_3f7554;
        case 0x3f7558u: goto label_3f7558;
        case 0x3f755cu: goto label_3f755c;
        case 0x3f7560u: goto label_3f7560;
        case 0x3f7564u: goto label_3f7564;
        case 0x3f7568u: goto label_3f7568;
        case 0x3f756cu: goto label_3f756c;
        case 0x3f7570u: goto label_3f7570;
        case 0x3f7574u: goto label_3f7574;
        default: break;
    }

    ctx->pc = 0x3f74f8u;

label_3f74f8:
    // 0x3f74f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3f74f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3f74fc:
    // 0x3f74fc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3f74fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3f7500:
    // 0x3f7500: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3f7500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3f7504:
    // 0x3f7504: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f7504u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f7508:
    // 0x3f7508: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3f7508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3f750c:
    // 0x3f750c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3f750cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f7510:
    // 0x3f7510: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3f7510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3f7514:
    // 0x3f7514: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3f7514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3f7518:
    // 0x3f7518: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3f7518u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f751c:
    // 0x3f751c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f751cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f7520:
    // 0x3f7520: 0x40f809  jalr        $v0
label_3f7524:
    if (ctx->pc == 0x3F7524u) {
        ctx->pc = 0x3F7524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7520u;
        // 0x3f7524: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7528u;
        goto label_3f7528;
    }
    ctx->pc = 0x3F7520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F7528u);
        ctx->pc = 0x3F7524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7520u;
        // 0x3f7524: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F7520u, 0x3F7528u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F7528u;
label_3f7528:
    // 0x3f7528: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3f7528u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f752c:
    // 0x3f752c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3f752cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3f7530:
    // 0x3f7530: 0xc0ea12a  jal         func_3A84A8
label_3f7534:
    if (ctx->pc == 0x3F7534u) {
        ctx->pc = 0x3F7534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7530u;
        // 0x3f7534: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7538u;
        goto label_3f7538;
    }
    ctx->pc = 0x3F7530u;
    SET_GPR_U32(ctx, 31, 0x3F7538u);
    ctx->pc = 0x3F7534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7530u;
    // 0x3f7534: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3F7530u, 0x3F7538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7538u;
label_3f7538:
    // 0x3f7538: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3f7538u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f753c:
    // 0x3f753c: 0x24020404  addiu       $v0, $zero, 0x404
    ctx->pc = 0x3f753cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1028));
label_3f7540:
    // 0x3f7540: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3f7540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3f7544:
    // 0x3f7544: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f7544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f7548:
    // 0x3f7548: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3f7548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3f754c:
    // 0x3f754c: 0xc0e858c  jal         func_3A1630
label_3f7550:
    if (ctx->pc == 0x3F7550u) {
        ctx->pc = 0x3F7550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F754Cu;
        // 0x3f7550: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7554u;
        goto label_3f7554;
    }
    ctx->pc = 0x3F754Cu;
    SET_GPR_U32(ctx, 31, 0x3F7554u);
    ctx->pc = 0x3F7550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F754Cu;
    // 0x3f7550: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F754Cu, 0x3F7554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7554u;
label_3f7554:
    // 0x3f7554: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3f7554u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f7558:
    // 0x3f7558: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3f7558u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3f755c:
    // 0x3f755c: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x3f755cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_3f7560:
    // 0x3f7560: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3f7560u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_3f7564:
    // 0x3f7564: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3f7564u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3f7568:
    // 0x3f7568: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3f7568u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f756c:
    // 0x3f756c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3f756cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3f7570:
    // 0x3f7570: 0x3e00008  jr          $ra
label_3f7574:
    if (ctx->pc == 0x3F7574u) {
        ctx->pc = 0x3F7574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7570u;
        // 0x3f7574: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7578u;
        goto label_fallthrough_0x3f7570;
    }
    ctx->pc = 0x3F7570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F7574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7570u;
        // 0x3f7574: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F7570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3f7570:
    ctx->pc = 0x3F7578u;
}
