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

// Function: sub_00315820
// Address: 0x315820 - 0x315890
void sub_00315820_0x315820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00315820_0x315820");
#endif

    switch (ctx->pc) {
        case 0x315820u: goto label_315820;
        case 0x315824u: goto label_315824;
        case 0x315828u: goto label_315828;
        case 0x31582cu: goto label_31582c;
        case 0x315830u: goto label_315830;
        case 0x315834u: goto label_315834;
        case 0x315838u: goto label_315838;
        case 0x31583cu: goto label_31583c;
        case 0x315840u: goto label_315840;
        case 0x315844u: goto label_315844;
        case 0x315848u: goto label_315848;
        case 0x31584cu: goto label_31584c;
        case 0x315850u: goto label_315850;
        case 0x315854u: goto label_315854;
        case 0x315858u: goto label_315858;
        case 0x31585cu: goto label_31585c;
        case 0x315860u: goto label_315860;
        case 0x315864u: goto label_315864;
        case 0x315868u: goto label_315868;
        case 0x31586cu: goto label_31586c;
        case 0x315870u: goto label_315870;
        case 0x315874u: goto label_315874;
        case 0x315878u: goto label_315878;
        case 0x31587cu: goto label_31587c;
        case 0x315880u: goto label_315880;
        case 0x315884u: goto label_315884;
        case 0x315888u: goto label_315888;
        case 0x31588cu: goto label_31588c;
        default: break;
    }

    ctx->pc = 0x315820u;

label_315820:
    // 0x315820: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x315820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_315824:
    // 0x315824: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x315824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_315828:
    // 0x315828: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x315828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_31582c:
    // 0x31582c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31582cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_315830:
    // 0x315830: 0xc05959e  jal         func_165678
label_315834:
    if (ctx->pc == 0x315834u) {
        ctx->pc = 0x315834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315830u;
        // 0x315834: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315838u;
        goto label_315838;
    }
    ctx->pc = 0x315830u;
    SET_GPR_U32(ctx, 31, 0x315838u);
    ctx->pc = 0x315834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315830u;
    // 0x315834: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x315830u, 0x315838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315838u;
label_315838:
    // 0x315838: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x315838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_31583c:
    // 0x31583c: 0xa04001b2  sb          $zero, 0x1B2($v0)
    ctx->pc = 0x31583cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 434), (uint8_t)GPR_U32(ctx, 0));
label_315840:
    // 0x315840: 0x84640128  lh          $a0, 0x128($v1)
    ctx->pc = 0x315840u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 296)));
label_315844:
    // 0x315844: 0x8c65012c  lw          $a1, 0x12C($v1)
    ctx->pc = 0x315844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 300)));
label_315848:
    // 0x315848: 0xa0f809  jalr        $a1
label_31584c:
    if (ctx->pc == 0x31584Cu) {
        ctx->pc = 0x31584Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315848u;
        // 0x31584c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315850u;
        goto label_315850;
    }
    ctx->pc = 0x315848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x315850u);
        ctx->pc = 0x31584Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315848u;
        // 0x31584c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315848u, 0x315850u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x315850u;
label_315850:
    // 0x315850: 0xc05959e  jal         func_165678
label_315854:
    if (ctx->pc == 0x315854u) {
        ctx->pc = 0x315854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315850u;
        // 0x315854: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315858u;
        goto label_315858;
    }
    ctx->pc = 0x315850u;
    SET_GPR_U32(ctx, 31, 0x315858u);
    ctx->pc = 0x315854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315850u;
    // 0x315854: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x315850u, 0x315858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315858u;
label_315858:
    // 0x315858: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x315858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_31585c:
    // 0x31585c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31585cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_315860:
    // 0x315860: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x315860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_315864:
    // 0x315864: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x315864u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_315868:
    // 0x315868: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x315868u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31586c:
    // 0x31586c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31586cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_315870:
    // 0x315870: 0xc087900  jal         func_21E400
label_315874:
    if (ctx->pc == 0x315874u) {
        ctx->pc = 0x315874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315870u;
        // 0x315874: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315878u;
        goto label_315878;
    }
    ctx->pc = 0x315870u;
    SET_GPR_U32(ctx, 31, 0x315878u);
    ctx->pc = 0x315874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315870u;
    // 0x315874: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E400u, 0x315870u, 0x315878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315878u;
label_315878:
    // 0x315878: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x315878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31587c:
    // 0x31587c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31587cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_315880:
    // 0x315880: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x315880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
label_315884:
    // 0x315884: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x315884u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_315888:
    // 0x315888: 0x3e00008  jr          $ra
label_31588c:
    if (ctx->pc == 0x31588Cu) {
        ctx->pc = 0x31588Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315888u;
        // 0x31588c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315890u;
        goto label_fallthrough_0x315888;
    }
    ctx->pc = 0x315888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31588Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315888u;
        // 0x31588c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x315888:
    ctx->pc = 0x315890u;
}
