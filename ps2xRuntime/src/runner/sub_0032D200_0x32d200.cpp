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

// Function: sub_0032D200
// Address: 0x32d200 - 0x32d280
void sub_0032D200_0x32d200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032D200_0x32d200");
#endif

    switch (ctx->pc) {
        case 0x32d224u: goto label_32d224;
        case 0x32d240u: goto label_32d240;
        case 0x32d260u: goto label_32d260;
        default: break;
    }

    ctx->pc = 0x32d200u;

    // 0x32d200: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x32d200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32d204: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x32d204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x32d208: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x32d208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x32d20c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32d20cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d210: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x32d210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x32d214: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x32d214u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d218: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32d218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32d21c: 0xc0cb460  jal         func_32D180
    ctx->pc = 0x32D21Cu;
    SET_GPR_U32(ctx, 31, 0x32D224u);
    ctx->pc = 0x32D220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D21Cu;
    // 0x32d220: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D180u, 0x32D21Cu, 0x32D224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D224u;
label_32d224:
    // 0x32d224: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x32d224u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d228: 0x18600007  blez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x32D228u;
    {
        const bool branch_taken_0x32d228 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x32D22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D228u;
        // 0x32d22c: 0x3c050057  lui         $a1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d228) {
            ctx->pc = 0x32D248u;
            goto label_32d248;
        }
    }
    ctx->pc = 0x32D230u;
    // 0x32d230: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32d230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d234: 0x24a55c58  addiu       $a1, $a1, 0x5C58
    ctx->pc = 0x32d234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23640));
    // 0x32d238: 0xc0ca8a0  jal         func_32A280
    ctx->pc = 0x32D238u;
    SET_GPR_U32(ctx, 31, 0x32D240u);
    ctx->pc = 0x32D23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D238u;
    // 0x32d23c: 0x26260010  addiu       $a2, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A280u, 0x32D238u, 0x32D240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D240u;
label_32d240:
    // 0x32d240: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x32D240u;
    {
        const bool branch_taken_0x32d240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D240u;
        // 0x32d244: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d240) {
            ctx->pc = 0x32D268u;
            goto label_32d268;
        }
    }
    ctx->pc = 0x32D248u;
label_32d248:
    // 0x32d248: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x32d248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32d24c: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32D24Cu;
    {
        const bool branch_taken_0x32d24c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32d24c) {
            ctx->pc = 0x32D250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32D24Cu;
            // 0x32d250: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32D268u;
            goto label_32d268;
        }
    }
    ctx->pc = 0x32D254u;
    // 0x32d254: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x32d254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x32d258: 0xc0cb386  jal         func_32CE18
    ctx->pc = 0x32D258u;
    SET_GPR_U32(ctx, 31, 0x32D260u);
    ctx->pc = 0x32D25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D258u;
    // 0x32d25c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CE18u, 0x32D258u, 0x32D260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D260u;
label_32d260:
    // 0x32d260: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x32d260u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x32d264: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x32d264u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_32d268:
    // 0x32d268: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x32d268u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32d26c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x32d26cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32d270: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32d270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32d274: 0x3e00008  jr          $ra
    ctx->pc = 0x32D274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D274u;
        // 0x32d278: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D27Cu;
    // 0x32d27c: 0x0  nop
    ctx->pc = 0x32d27cu;
    // NOP
    ctx->pc = 0x32d280u;
}
