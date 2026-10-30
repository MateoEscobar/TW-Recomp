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

// Function: sub_001B2520
// Address: 0x1b2520 - 0x1b2610
void sub_001B2520_0x1b2520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2520_0x1b2520");
#endif

    switch (ctx->pc) {
        case 0x1b258cu: goto label_1b258c;
        case 0x1b25b4u: goto label_1b25b4;
        case 0x1b25fcu: goto label_1b25fc;
        default: break;
    }

    ctx->pc = 0x1b2520u;

    // 0x1b2520: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b2520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b2524: 0x28a20007  slti        $v0, $a1, 0x7
    ctx->pc = 0x1b2524u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x1b2528: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b2528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b252c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b252cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b2530: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1b2530u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2534: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b2534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b2538: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1B2538u;
    {
        const bool branch_taken_0x1b2538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B253Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2538u;
        // 0x1b253c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2538) {
            ctx->pc = 0x1B25BCu;
            goto label_1b25bc;
        }
    }
    ctx->pc = 0x1B2540u;
    // 0x1b2540: 0x28a2000a  slti        $v0, $a1, 0xA
    ctx->pc = 0x1b2540u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1b2544: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1B2544u;
    {
        const bool branch_taken_0x1b2544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2544u;
        // 0x1b2548: 0x24042940  addiu       $a0, $zero, 0x2940 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2544) {
            ctx->pc = 0x1B25BCu;
            goto label_1b25bc;
        }
    }
    ctx->pc = 0x1B254Cu;
    // 0x1b254c: 0x2041818  mult        $v1, $s0, $a0
    ctx->pc = 0x1b254cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1b2550: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x1b2550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1b2554: 0x8c4315ec  lw          $v1, 0x15EC($v0)
    ctx->pc = 0x1b2554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5612)));
    // 0x1b2558: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1B2558u;
    {
        const bool branch_taken_0x1b2558 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B255Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2558u;
        // 0x1b255c: 0x24040ab0  addiu       $a0, $zero, 0xAB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2558) {
            ctx->pc = 0x1B2590u;
            goto label_1b2590;
        }
    }
    ctx->pc = 0x1B2560u;
    // 0x1b2560: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b2560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b2564: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b2564u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2568: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1b2568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1b256c: 0x8c64aa84  lw          $a0, -0x557C($v1)
    ctx->pc = 0x1b256cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x1b2570: 0x244215d0  addiu       $v0, $v0, 0x15D0
    ctx->pc = 0x1b2570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5584));
    // 0x1b2574: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b2574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2578: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b2578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b257c: 0xac46001c  sw          $a2, 0x1C($v0)
    ctx->pc = 0x1b257cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 6));
    // 0x1b2580: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x1b2580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x1b2584: 0xc043f0c  jal         func_10FC30
    ctx->pc = 0x1B2584u;
    SET_GPR_U32(ctx, 31, 0x1B258Cu);
    ctx->pc = 0x1B2588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2584u;
    // 0x1b2588: 0xac400034  sw          $zero, 0x34($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1B2584u, 0x1B258Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B258Cu;
label_1b258c:
    // 0x1b258c: 0x24040ab0  addiu       $a0, $zero, 0xAB0
    ctx->pc = 0x1b258cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2736));
label_1b2590:
    // 0x1b2590: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1b2590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1b2594: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x1b2594u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1b2598: 0x8c66489c  lw          $a2, 0x489C($v1)
    ctx->pc = 0x1b2598u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
    // 0x1b259c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1b259cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1b25a0: 0x344277d0  ori         $v0, $v0, 0x77D0
    ctx->pc = 0x1b25a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30672);
    // 0x1b25a4: 0x80c50290  lb          $a1, 0x290($a2)
    ctx->pc = 0x1b25a4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 656)));
    // 0x1b25a8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1b25a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1b25ac: 0xc06a9c8  jal         func_1AA720
    ctx->pc = 0x1B25ACu;
    SET_GPR_U32(ctx, 31, 0x1B25B4u);
    ctx->pc = 0x1B25B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B25ACu;
    // 0x1b25b0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA720u, 0x1B25ACu, 0x1B25B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B25B4u;
label_1b25b4:
    // 0x1b25b4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1B25B4u;
    {
        const bool branch_taken_0x1b25b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B25B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B25B4u;
        // 0x1b25b8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b25b4) {
            ctx->pc = 0x1B2600u;
            goto label_1b2600;
        }
    }
    ctx->pc = 0x1B25BCu;
label_1b25bc:
    // 0x1b25bc: 0x24032940  addiu       $v1, $zero, 0x2940
    ctx->pc = 0x1b25bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10560));
    // 0x1b25c0: 0x24040ab0  addiu       $a0, $zero, 0xAB0
    ctx->pc = 0x1b25c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2736));
    // 0x1b25c4: 0x2031018  mult        $v0, $s0, $v1
    ctx->pc = 0x1b25c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1b25c8: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x1b25c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1b25cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b25ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b25d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b25d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b25d4: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x1b25d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1b25d8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1b25d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1b25dc: 0x246315d0  addiu       $v1, $v1, 0x15D0
    ctx->pc = 0x1b25dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5584));
    // 0x1b25e0: 0x344277d0  ori         $v0, $v0, 0x77D0
    ctx->pc = 0x1b25e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30672);
    // 0x1b25e4: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x1b25e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x1b25e8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1b25e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1b25ec: 0xac600034  sw          $zero, 0x34($v1)
    ctx->pc = 0x1b25ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
    // 0x1b25f0: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x1b25f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1b25f4: 0xc06aa54  jal         func_1AA950
    ctx->pc = 0x1B25F4u;
    SET_GPR_U32(ctx, 31, 0x1B25FCu);
    ctx->pc = 0x1B25F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B25F4u;
    // 0x1b25f8: 0xac60001c  sw          $zero, 0x1C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA950u, 0x1B25F4u, 0x1B25FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B25FCu;
label_1b25fc:
    // 0x1b25fc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b25fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b2600:
    // 0x1b2600: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b2600u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2604: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b2604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2608: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B260Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2608u;
        // 0x1b260c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2610u;
}
