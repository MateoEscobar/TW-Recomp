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

// Function: sub_004660F0
// Address: 0x4660f0 - 0x466148
void sub_004660F0_0x4660f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004660F0_0x4660f0");
#endif

    switch (ctx->pc) {
        case 0x466104u: goto label_466104;
        case 0x46611cu: goto label_46611c;
        case 0x46612cu: goto label_46612c;
        default: break;
    }

    ctx->pc = 0x4660f0u;

    // 0x4660f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4660f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4660f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4660f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4660f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4660f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4660fc: 0xc11c770  jal         func_471DC0
    ctx->pc = 0x4660FCu;
    SET_GPR_U32(ctx, 31, 0x466104u);
    ctx->pc = 0x466100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4660FCu;
    // 0x466100: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x471DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x471DC0u, 0x4660FCu, 0x466104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466104u;
label_466104:
    // 0x466104: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x466104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x466108: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x466108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x46610c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x46610Cu;
    {
        const bool branch_taken_0x46610c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x466110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46610Cu;
        // 0x466110: 0x3c040001  lui         $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46610c) {
            ctx->pc = 0x466124u;
            goto label_466124;
        }
    }
    ctx->pc = 0x466114u;
    // 0x466114: 0xc11851c  jal         func_461470
    ctx->pc = 0x466114u;
    SET_GPR_U32(ctx, 31, 0x46611Cu);
    ctx->pc = 0x466118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x466114u;
    // 0x466118: 0x34841010  ori         $a0, $a0, 0x1010 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4112);
    ctx->in_delay_slot = false;
    ctx->pc = 0x461470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x461470u, 0x466114u, 0x46611Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46611Cu;
label_46611c:
    // 0x46611c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x46611Cu;
    {
        const bool branch_taken_0x46611c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x466120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46611Cu;
        // 0x466120: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46611c) {
            ctx->pc = 0x466130u;
            goto label_466130;
        }
    }
    ctx->pc = 0x466124u;
label_466124:
    // 0x466124: 0xc11851c  jal         func_461470
    ctx->pc = 0x466124u;
    SET_GPR_U32(ctx, 31, 0x46612Cu);
    ctx->pc = 0x466128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x466124u;
    // 0x466128: 0x3484100f  ori         $a0, $a0, 0x100F (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4111);
    ctx->in_delay_slot = false;
    ctx->pc = 0x461470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x461470u, 0x466124u, 0x46612Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46612Cu;
label_46612c:
    // 0x46612c: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x46612cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
label_466130:
    // 0x466130: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x466130u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x466134: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x466134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x466138: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x466138u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46613c: 0x3e00008  jr          $ra
    ctx->pc = 0x46613Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x466140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46613Cu;
        // 0x466140: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46613Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x466144u;
    // 0x466144: 0x0  nop
    ctx->pc = 0x466144u;
    // NOP
    ctx->pc = 0x466148u;
}
