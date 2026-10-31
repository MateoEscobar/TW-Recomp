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

// Function: sub_00419558
// Address: 0x419558 - 0x419630
void sub_00419558_0x419558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00419558_0x419558");
#endif

    switch (ctx->pc) {
        case 0x4195b0u: goto label_4195b0;
        case 0x4195bcu: goto label_4195bc;
        case 0x4195e4u: goto label_4195e4;
        case 0x419608u: goto label_419608;
        default: break;
    }

    ctx->pc = 0x419558u;

    // 0x419558: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x419558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x41955c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x41955cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x419560: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x419560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x419564: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x419564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x419568: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x419568u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41956c: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x41956cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x419570: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x419570u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x419574: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x419574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x419578: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x419578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x41957c: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x41957cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x419580: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x419580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x419584: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x419584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x419588: 0x8ca3489c  lw          $v1, 0x489C($a1)
    ctx->pc = 0x419588u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x41958c: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x41958cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x419590: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x419590u;
    {
        const bool branch_taken_0x419590 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x419594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419590u;
        // 0x419594: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419590) {
            ctx->pc = 0x4195DCu;
            goto label_4195dc;
        }
    }
    ctx->pc = 0x419598u;
    // 0x419598: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x419598u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41959c: 0x3c160008  lui         $s6, 0x8
    ctx->pc = 0x41959cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)8 << 16));
    // 0x4195a0: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x4195a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4195a4: 0x24100228  addiu       $s0, $zero, 0x228
    ctx->pc = 0x4195a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
    // 0x4195a8: 0x8e64489c  lw          $a0, 0x489C($s3)
    ctx->pc = 0x4195a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
    // 0x4195ac: 0x0  nop
    ctx->pc = 0x4195acu;
    // NOP
label_4195b0:
    // 0x4195b0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4195b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x4195b4: 0xc0e409a  jal         func_390268
    ctx->pc = 0x4195B4u;
    SET_GPR_U32(ctx, 31, 0x4195BCu);
    ctx->pc = 0x4195B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4195B4u;
    // 0x4195b8: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x4195B4u, 0x4195BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4195BCu;
label_4195bc:
    // 0x4195bc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x4195bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x4195c0: 0x8e64489c  lw          $a0, 0x489C($s3)
    ctx->pc = 0x4195c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
    // 0x4195c4: 0xdc4300e0  ld          $v1, 0xE0($v0)
    ctx->pc = 0x4195c4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 224)));
    // 0x4195c8: 0x84820224  lh          $v0, 0x224($a0)
    ctx->pc = 0x4195c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x4195cc: 0x761824  and         $v1, $v1, $s6
    ctx->pc = 0x4195ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 22));
    // 0x4195d0: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x4195d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x4195d4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x4195D4u;
    {
        const bool branch_taken_0x4195d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4195D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4195D4u;
        // 0x4195d8: 0x2a3880b  movn        $s1, $s5, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4195d4) {
            ctx->pc = 0x4195B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4195b0;
        }
    }
    ctx->pc = 0x4195DCu;
label_4195dc:
    // 0x4195dc: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x4195DCu;
    SET_GPR_U32(ctx, 31, 0x4195E4u);
    ctx->pc = 0x4195E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4195DCu;
    // 0x4195e0: 0x26840264  addiu       $a0, $s4, 0x264 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 612));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x4195DCu, 0x4195E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4195E4u;
label_4195e4:
    // 0x4195e4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4195E4u;
    {
        const bool branch_taken_0x4195e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4195E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4195E4u;
        // 0x4195e8: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4195e4) {
            ctx->pc = 0x41960Cu;
            goto label_41960c;
        }
    }
    ctx->pc = 0x4195ECu;
    // 0x4195ec: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4195ECu;
    {
        const bool branch_taken_0x4195ec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x4195F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4195ECu;
        // 0x4195f0: 0x7bb10060  lq          $s1, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4195ec) {
            ctx->pc = 0x419610u;
            goto label_419610;
        }
    }
    ctx->pc = 0x4195F4u;
    // 0x4195f4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4195f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x4195f8: 0x8e850264  lw          $a1, 0x264($s4)
    ctx->pc = 0x4195f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 612)));
    // 0x4195fc: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x4195fcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x419600: 0xc0440c6  jal         func_110318
    ctx->pc = 0x419600u;
    SET_GPR_U32(ctx, 31, 0x419608u);
    ctx->pc = 0x419604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419600u;
    // 0x419604: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x419600u, 0x419608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419608u;
label_419608:
    // 0x419608: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x419608u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_41960c:
    // 0x41960c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x41960cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_419610:
    // 0x419610: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x419610u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x419614: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x419614u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x419618: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x419618u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x41961c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x41961cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x419620: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x419620u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x419624: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x419624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x419628: 0x3e00008  jr          $ra
    ctx->pc = 0x419628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419628u;
        // 0x41962c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x419628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x419630u;
}
