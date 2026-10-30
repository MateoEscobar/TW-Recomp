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

// Function: sub_00150380
// Address: 0x150380 - 0x150448
void sub_00150380_0x150380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150380_0x150380");
#endif

    switch (ctx->pc) {
        case 0x1503c0u: goto label_1503c0;
        case 0x1503d8u: goto label_1503d8;
        case 0x1503e4u: goto label_1503e4;
        case 0x1503f4u: goto label_1503f4;
        case 0x1503fcu: goto label_1503fc;
        case 0x150408u: goto label_150408;
        case 0x150414u: goto label_150414;
        case 0x15041cu: goto label_15041c;
        case 0x150424u: goto label_150424;
        case 0x15042cu: goto label_15042c;
        default: break;
    }

    ctx->pc = 0x150380u;

    // 0x150380: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x150380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x150384: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x150384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x150388: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x150388u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
    // 0x15038c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x15038cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x150390: 0x8e62c20c  lw          $v0, -0x3DF4($s3)
    ctx->pc = 0x150390u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50C20Cu));
    // 0x150394: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x150394u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150398: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x150398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x15039c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15039cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1503a0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1503a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1503a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1503a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1503a8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1503a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1503ac: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1503ACu;
    {
        const bool branch_taken_0x1503ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1503B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1503ACu;
        // 0x1503b0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1503ac) {
            ctx->pc = 0x1503ECu;
            goto label_1503ec;
        }
    }
    ctx->pc = 0x1503B4u;
    // 0x1503b4: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x1503b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x1503b8: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x1503B8u;
    SET_GPR_U32(ctx, 31, 0x1503C0u);
    ctx->pc = 0x1503BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1503B8u;
    // 0x1503bc: 0x2484c018  addiu       $a0, $a0, -0x3FE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x1503B8u, 0x1503C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1503C0u;
label_1503c0:
    // 0x1503c0: 0x8e66c20c  lw          $a2, -0x3DF4($s3)
    ctx->pc = 0x1503c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294951436)));
    // 0x1503c4: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x1503c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x1503c8: 0x2484c040  addiu       $a0, $a0, -0x3FC0
    ctx->pc = 0x1503c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950976));
    // 0x1503cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1503ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1503d0: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x1503D0u;
    SET_GPR_U32(ctx, 31, 0x1503D8u);
    ctx->pc = 0x1503D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1503D0u;
    // 0x1503d4: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x1503D0u, 0x1503D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1503D8u;
label_1503d8:
    // 0x1503d8: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x1503d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x1503dc: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x1503DCu;
    SET_GPR_U32(ctx, 31, 0x1503E4u);
    ctx->pc = 0x1503E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1503DCu;
    // 0x1503e0: 0x2484c068  addiu       $a0, $a0, -0x3F98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x1503DCu, 0x1503E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1503E4u;
label_1503e4:
    // 0x1503e4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1503E4u;
    {
        const bool branch_taken_0x1503e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1503E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1503E4u;
        // 0x1503e8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1503e4) {
            ctx->pc = 0x150430u;
            goto label_150430;
        }
    }
    ctx->pc = 0x1503ECu;
label_1503ec:
    // 0x1503ec: 0xc0546f0  jal         func_151BC0
    ctx->pc = 0x1503ECu;
    SET_GPR_U32(ctx, 31, 0x1503F4u);
    ctx->pc = 0x151BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151BC0u, 0x1503ECu, 0x1503F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1503F4u;
label_1503f4:
    // 0x1503f4: 0xc05368e  jal         func_14DA38
    ctx->pc = 0x1503F4u;
    SET_GPR_U32(ctx, 31, 0x1503FCu);
    ctx->pc = 0x1503F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1503F4u;
    // 0x1503f8: 0x2404002b  addiu       $a0, $zero, 0x2B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DA38u, 0x1503F4u, 0x1503FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1503FCu;
label_1503fc:
    // 0x1503fc: 0x102400  sll         $a0, $s0, 16
    ctx->pc = 0x1503fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x150400: 0xc053722  jal         func_14DC88
    ctx->pc = 0x150400u;
    SET_GPR_U32(ctx, 31, 0x150408u);
    ctx->pc = 0x150404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150400u;
    // 0x150404: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x150400u, 0x150408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150408u;
label_150408:
    // 0x150408: 0x112400  sll         $a0, $s1, 16
    ctx->pc = 0x150408u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x15040c: 0xc053722  jal         func_14DC88
    ctx->pc = 0x15040Cu;
    SET_GPR_U32(ctx, 31, 0x150414u);
    ctx->pc = 0x150410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15040Cu;
    // 0x150410: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x15040Cu, 0x150414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150414u;
label_150414:
    // 0x150414: 0xc05373e  jal         func_14DCF8
    ctx->pc = 0x150414u;
    SET_GPR_U32(ctx, 31, 0x15041Cu);
    ctx->pc = 0x150418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150414u;
    // 0x150418: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DCF8u, 0x150414u, 0x15041Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15041Cu;
label_15041c:
    // 0x15041c: 0xc0536aa  jal         func_14DAA8
    ctx->pc = 0x15041Cu;
    SET_GPR_U32(ctx, 31, 0x150424u);
    ctx->pc = 0x14DAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DAA8u, 0x15041Cu, 0x150424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150424u;
label_150424:
    // 0x150424: 0xc05471c  jal         func_151C70
    ctx->pc = 0x150424u;
    SET_GPR_U32(ctx, 31, 0x15042Cu);
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x150424u, 0x15042Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15042Cu;
label_15042c:
    // 0x15042c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x15042cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_150430:
    // 0x150430: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x150430u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x150434: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x150434u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x150438: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x150438u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15043c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15043cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150440: 0x3e00008  jr          $ra
    ctx->pc = 0x150440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150440u;
        // 0x150444: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150448u;
}
