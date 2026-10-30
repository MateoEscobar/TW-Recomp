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

// Function: sub_001507D0
// Address: 0x1507d0 - 0x150838
void sub_001507D0_0x1507d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001507D0_0x1507d0");
#endif

    switch (ctx->pc) {
        case 0x1507f8u: goto label_1507f8;
        case 0x150800u: goto label_150800;
        case 0x15080cu: goto label_15080c;
        case 0x150814u: goto label_150814;
        case 0x15081cu: goto label_15081c;
        default: break;
    }

    ctx->pc = 0x1507d0u;

    // 0x1507d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1507d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1507d4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1507d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1507d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1507d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1507dc: 0x8c62c20c  lw          $v0, -0x3DF4($v1)
    ctx->pc = 0x1507dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50C20Cu));
    // 0x1507e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1507e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1507e4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1507e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1507e8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1507E8u;
    {
        const bool branch_taken_0x1507e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1507ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1507E8u;
        // 0x1507ec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1507e8) {
            ctx->pc = 0x150824u;
            goto label_150824;
        }
    }
    ctx->pc = 0x1507F0u;
    // 0x1507f0: 0xc0546f0  jal         func_151BC0
    ctx->pc = 0x1507F0u;
    SET_GPR_U32(ctx, 31, 0x1507F8u);
    ctx->pc = 0x151BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151BC0u, 0x1507F0u, 0x1507F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1507F8u;
label_1507f8:
    // 0x1507f8: 0xc05368e  jal         func_14DA38
    ctx->pc = 0x1507F8u;
    SET_GPR_U32(ctx, 31, 0x150800u);
    ctx->pc = 0x1507FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1507F8u;
    // 0x1507fc: 0x2404002f  addiu       $a0, $zero, 0x2F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DA38u, 0x1507F8u, 0x150800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150800u;
label_150800:
    // 0x150800: 0x102400  sll         $a0, $s0, 16
    ctx->pc = 0x150800u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x150804: 0xc053722  jal         func_14DC88
    ctx->pc = 0x150804u;
    SET_GPR_U32(ctx, 31, 0x15080Cu);
    ctx->pc = 0x150808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150804u;
    // 0x150808: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x150804u, 0x15080Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15080Cu;
label_15080c:
    // 0x15080c: 0xc0536aa  jal         func_14DAA8
    ctx->pc = 0x15080Cu;
    SET_GPR_U32(ctx, 31, 0x150814u);
    ctx->pc = 0x14DAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DAA8u, 0x15080Cu, 0x150814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150814u;
label_150814:
    // 0x150814: 0xc05471c  jal         func_151C70
    ctx->pc = 0x150814u;
    SET_GPR_U32(ctx, 31, 0x15081Cu);
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x150814u, 0x15081Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15081Cu;
label_15081c:
    // 0x15081c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15081Cu;
    {
        const bool branch_taken_0x15081c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15081Cu;
        // 0x150820: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15081c) {
            ctx->pc = 0x150828u;
            goto label_150828;
        }
    }
    ctx->pc = 0x150824u;
label_150824:
    // 0x150824: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x150824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_150828:
    // 0x150828: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x150828u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15082c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15082cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150830: 0x3e00008  jr          $ra
    ctx->pc = 0x150830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150830u;
        // 0x150834: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150838u;
}
