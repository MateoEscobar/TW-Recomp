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

// Function: sub_001BB440
// Address: 0x1bb440 - 0x1bb4a0
void sub_001BB440_0x1bb440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB440_0x1bb440");
#endif

    switch (ctx->pc) {
        case 0x1bb440u: goto label_1bb440;
        case 0x1bb444u: goto label_1bb444;
        case 0x1bb448u: goto label_1bb448;
        case 0x1bb44cu: goto label_1bb44c;
        case 0x1bb450u: goto label_1bb450;
        case 0x1bb454u: goto label_1bb454;
        case 0x1bb458u: goto label_1bb458;
        case 0x1bb45cu: goto label_1bb45c;
        case 0x1bb460u: goto label_1bb460;
        case 0x1bb464u: goto label_1bb464;
        case 0x1bb468u: goto label_1bb468;
        case 0x1bb46cu: goto label_1bb46c;
        case 0x1bb470u: goto label_1bb470;
        case 0x1bb474u: goto label_1bb474;
        case 0x1bb478u: goto label_1bb478;
        case 0x1bb47cu: goto label_1bb47c;
        case 0x1bb480u: goto label_1bb480;
        case 0x1bb484u: goto label_1bb484;
        case 0x1bb488u: goto label_1bb488;
        case 0x1bb48cu: goto label_1bb48c;
        case 0x1bb490u: goto label_1bb490;
        case 0x1bb494u: goto label_1bb494;
        case 0x1bb498u: goto label_1bb498;
        case 0x1bb49cu: goto label_1bb49c;
        default: break;
    }

    ctx->pc = 0x1bb440u;

label_1bb440:
    // 0x1bb440: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bb440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1bb444:
    // 0x1bb444: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1bb444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1bb448:
    // 0x1bb448: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1bb448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1bb44c:
    // 0x1bb44c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1bb44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1bb450:
    // 0x1bb450: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bb450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1bb454:
    // 0x1bb454: 0x10a2000d  beq         $a1, $v0, . + 4 + (0xD << 2)
label_1bb458:
    if (ctx->pc == 0x1BB458u) {
        ctx->pc = 0x1BB458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB454u;
        // 0x1bb458: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB45Cu;
        goto label_1bb45c;
    }
    ctx->pc = 0x1BB454u;
    {
        const bool branch_taken_0x1bb454 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BB458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB454u;
        // 0x1bb458: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb454) {
            ctx->pc = 0x1BB48Cu;
            goto label_1bb48c;
        }
    }
    ctx->pc = 0x1BB45Cu;
label_1bb45c:
    // 0x1bb45c: 0xae050170  sw          $a1, 0x170($s0)
    ctx->pc = 0x1bb45cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 5));
label_1bb460:
    // 0x1bb460: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1bb460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1bb464:
    // 0x1bb464: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1bb464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1bb468:
    // 0x1bb468: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1bb468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1bb46c:
    // 0x1bb46c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1bb46cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1bb470:
    // 0x1bb470: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1bb470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1bb474:
    // 0x1bb474: 0x40f809  jalr        $v0
label_1bb478:
    if (ctx->pc == 0x1BB478u) {
        ctx->pc = 0x1BB478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB474u;
        // 0x1bb478: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB47Cu;
        goto label_1bb47c;
    }
    ctx->pc = 0x1BB474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BB47Cu);
        ctx->pc = 0x1BB478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB474u;
        // 0x1bb478: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB474u, 0x1BB47Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BB47Cu;
label_1bb47c:
    // 0x1bb47c: 0x8e030170  lw          $v1, 0x170($s0)
    ctx->pc = 0x1bb47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 368)));
label_1bb480:
    // 0x1bb480: 0xae000178  sw          $zero, 0x178($s0)
    ctx->pc = 0x1bb480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 376), GPR_U32(ctx, 0));
label_1bb484:
    // 0x1bb484: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bb484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1bb488:
    // 0x1bb488: 0xae030170  sw          $v1, 0x170($s0)
    ctx->pc = 0x1bb488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 3));
label_1bb48c:
    // 0x1bb48c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1bb48cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1bb490:
    // 0x1bb490: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bb490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bb494:
    // 0x1bb494: 0x3e00008  jr          $ra
label_1bb498:
    if (ctx->pc == 0x1BB498u) {
        ctx->pc = 0x1BB498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB494u;
        // 0x1bb498: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB49Cu;
        goto label_1bb49c;
    }
    ctx->pc = 0x1BB494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB494u;
        // 0x1bb498: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB49Cu;
label_1bb49c:
    // 0x1bb49c: 0x0  nop
    ctx->pc = 0x1bb49cu;
    // NOP
    ctx->pc = 0x1bb4a0u;
}
