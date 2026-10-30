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

// Function: sub_00419630
// Address: 0x419630 - 0x419718
void sub_00419630_0x419630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00419630_0x419630");
#endif

    switch (ctx->pc) {
        case 0x419688u: goto label_419688;
        case 0x419694u: goto label_419694;
        case 0x4196c4u: goto label_4196c4;
        case 0x4196ecu: goto label_4196ec;
        default: break;
    }

    ctx->pc = 0x419630u;

    // 0x419630: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x419630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x419634: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x419634u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x419638: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x419638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x41963c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x41963cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x419640: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x419640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x419644: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x419644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x419648: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x419648u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41964c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x41964cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x419650: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x419650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x419654: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x419654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x419658: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x419658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x41965c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41965cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x419660: 0x8ca3489c  lw          $v1, 0x489C($a1)
    ctx->pc = 0x419660u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x419664: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x419664u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x419668: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x419668u;
    {
        const bool branch_taken_0x419668 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x41966Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419668u;
        // 0x41966c: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419668) {
            ctx->pc = 0x4196B4u;
            goto label_4196b4;
        }
    }
    ctx->pc = 0x419670u;
    // 0x419670: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x419670u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x419674: 0x3c150008  lui         $s5, 0x8
    ctx->pc = 0x419674u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)8 << 16));
    // 0x419678: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x419678u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41967c: 0x24110228  addiu       $s1, $zero, 0x228
    ctx->pc = 0x41967cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
    // 0x419680: 0x8e64489c  lw          $a0, 0x489C($s3)
    ctx->pc = 0x419680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
    // 0x419684: 0x0  nop
    ctx->pc = 0x419684u;
    // NOP
label_419688:
    // 0x419688: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x419688u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x41968c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x41968Cu;
    SET_GPR_U32(ctx, 31, 0x419694u);
    ctx->pc = 0x419690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41968Cu;
    // 0x419690: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x41968Cu, 0x419694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419694u;
label_419694:
    // 0x419694: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x419694u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x419698: 0x8e64489c  lw          $a0, 0x489C($s3)
    ctx->pc = 0x419698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
    // 0x41969c: 0xdc4300e0  ld          $v1, 0xE0($v0)
    ctx->pc = 0x41969cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 224)));
    // 0x4196a0: 0x84820224  lh          $v0, 0x224($a0)
    ctx->pc = 0x4196a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x4196a4: 0x751824  and         $v1, $v1, $s5
    ctx->pc = 0x4196a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 21));
    // 0x4196a8: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x4196a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x4196ac: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x4196ACu;
    {
        const bool branch_taken_0x4196ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4196B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4196ACu;
        // 0x4196b0: 0x283800b  movn        $s0, $s4, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4196ac) {
            ctx->pc = 0x419688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_419688;
        }
    }
    ctx->pc = 0x4196B4u;
label_4196b4:
    // 0x4196b4: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x4196B4u;
    {
        const bool branch_taken_0x4196b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4196B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4196B4u;
        // 0x4196b8: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4196b4) {
            ctx->pc = 0x4196F4u;
            goto label_4196f4;
        }
    }
    ctx->pc = 0x4196BCu;
    // 0x4196bc: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x4196BCu;
    SET_GPR_U32(ctx, 31, 0x4196C4u);
    ctx->pc = 0x4196C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4196BCu;
    // 0x4196c0: 0x26c40264  addiu       $a0, $s6, 0x264 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 612));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x4196BCu, 0x4196C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4196C4u;
label_4196c4:
    // 0x4196c4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4196C4u;
    {
        const bool branch_taken_0x4196c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4196C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4196C4u;
        // 0x4196c8: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4196c4) {
            ctx->pc = 0x4196F4u;
            goto label_4196f4;
        }
    }
    ctx->pc = 0x4196CCu;
    // 0x4196cc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4196ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x4196d0: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x4196d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x4196d4: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x4196d4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x4196d8: 0x24a5adf0  addiu       $a1, $a1, -0x5210
    ctx->pc = 0x4196d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946288));
    // 0x4196dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4196dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4196e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4196e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4196e4: 0xc043f1c  jal         func_10FC70
    ctx->pc = 0x4196E4u;
    SET_GPR_U32(ctx, 31, 0x4196ECu);
    ctx->pc = 0x4196E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4196E4u;
    // 0x4196e8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC70u, 0x4196E4u, 0x4196ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4196ECu;
label_4196ec:
    // 0x4196ec: 0xaec20264  sw          $v0, 0x264($s6)
    ctx->pc = 0x4196ecu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 612), GPR_U32(ctx, 2));
    // 0x4196f0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x4196f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4196f4:
    // 0x4196f4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x4196f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4196f8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x4196f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4196fc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4196fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x419700: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x419700u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x419704: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x419704u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x419708: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x419708u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41970c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41970cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x419710: 0x3e00008  jr          $ra
    ctx->pc = 0x419710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x419714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419710u;
        // 0x419714: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x419710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x419718u;
}
