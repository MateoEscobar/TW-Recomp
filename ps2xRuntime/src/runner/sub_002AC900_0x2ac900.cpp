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

// Function: sub_002AC900
// Address: 0x2ac900 - 0x2ac970
void sub_002AC900_0x2ac900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC900_0x2ac900");
#endif

    switch (ctx->pc) {
        case 0x2ac960u: goto label_2ac960;
        default: break;
    }

    ctx->pc = 0x2ac900u;

    // 0x2ac900: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ac900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ac904: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ac904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ac908: 0x90820031  lbu         $v0, 0x31($a0)
    ctx->pc = 0x2ac908u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 49)));
    // 0x2ac90c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2ac90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ac910: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x2ac910u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2ac914: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2AC914u;
    {
        const bool branch_taken_0x2ac914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC914u;
        // 0x2ac918: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac914) {
            ctx->pc = 0x2AC960u;
            goto label_2ac960;
        }
    }
    ctx->pc = 0x2AC91Cu;
    // 0x2ac91c: 0x8c8203e8  lw          $v0, 0x3E8($a0)
    ctx->pc = 0x2ac91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1000)));
    // 0x2ac920: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2AC920u;
    {
        const bool branch_taken_0x2ac920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC920u;
        // 0x2ac924: 0x2182b  sltu        $v1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac920) {
            ctx->pc = 0x2AC960u;
            goto label_2ac960;
        }
    }
    ctx->pc = 0x2AC928u;
    // 0x2ac928: 0x8c820410  lw          $v0, 0x410($a0)
    ctx->pc = 0x2ac928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1040)));
    // 0x2ac92c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2ac92cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ac930: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2AC930u;
    {
        const bool branch_taken_0x2ac930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2AC934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC930u;
        // 0x2ac934: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac930) {
            ctx->pc = 0x2AC964u;
            goto label_2ac964;
        }
    }
    ctx->pc = 0x2AC938u;
    // 0x2ac938: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2ac938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x2ac93c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2ac93cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2ac940: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ac940u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ac944: 0x2405029c  addiu       $a1, $zero, 0x29C
    ctx->pc = 0x2ac944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    // 0x2ac948: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ac948u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac94c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ac94cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac950: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2ac950u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2ac954: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2ac954u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ac958: 0xc0968f8  jal         func_25A3E0
    ctx->pc = 0x2AC958u;
    SET_GPR_U32(ctx, 31, 0x2AC960u);
    ctx->pc = 0x2AC95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC958u;
    // 0x2ac95c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3E0u, 0x2AC958u, 0x2AC960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC960u;
label_2ac960:
    // 0x2ac960: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ac960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ac964:
    // 0x2ac964: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC964u;
        // 0x2ac968: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC96Cu;
    // 0x2ac96c: 0x0  nop
    ctx->pc = 0x2ac96cu;
    // NOP
    ctx->pc = 0x2ac970u;
}
