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

// Function: sub_004F42B0
// Address: 0x4f42b0 - 0x4f4328
void sub_004F42B0_0x4f42b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F42B0_0x4f42b0");
#endif

    switch (ctx->pc) {
        case 0x4f42b0u: goto label_4f42b0;
        case 0x4f42b4u: goto label_4f42b4;
        case 0x4f42b8u: goto label_4f42b8;
        case 0x4f42bcu: goto label_4f42bc;
        case 0x4f42c0u: goto label_4f42c0;
        case 0x4f42c4u: goto label_4f42c4;
        case 0x4f42c8u: goto label_4f42c8;
        case 0x4f42ccu: goto label_4f42cc;
        case 0x4f42d0u: goto label_4f42d0;
        case 0x4f42d4u: goto label_4f42d4;
        case 0x4f42d8u: goto label_4f42d8;
        case 0x4f42dcu: goto label_4f42dc;
        case 0x4f42e0u: goto label_4f42e0;
        case 0x4f42e4u: goto label_4f42e4;
        case 0x4f42e8u: goto label_4f42e8;
        case 0x4f42ecu: goto label_4f42ec;
        case 0x4f42f0u: goto label_4f42f0;
        case 0x4f42f4u: goto label_4f42f4;
        case 0x4f42f8u: goto label_4f42f8;
        case 0x4f42fcu: goto label_4f42fc;
        case 0x4f4300u: goto label_4f4300;
        case 0x4f4304u: goto label_4f4304;
        case 0x4f4308u: goto label_4f4308;
        case 0x4f430cu: goto label_4f430c;
        case 0x4f4310u: goto label_4f4310;
        case 0x4f4314u: goto label_4f4314;
        case 0x4f4318u: goto label_4f4318;
        case 0x4f431cu: goto label_4f431c;
        case 0x4f4320u: goto label_4f4320;
        case 0x4f4324u: goto label_4f4324;
        default: break;
    }

    ctx->pc = 0x4f42b0u;

label_4f42b0:
    // 0x4f42b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f42b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4f42b4:
    // 0x4f42b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4f42b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4f42b8:
    // 0x4f42b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f42b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f42bc:
    // 0x4f42bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f42bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f42c0:
    // 0x4f42c0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4f42c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4f42c4:
    // 0x4f42c4: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x4f42c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_4f42c8:
    // 0x4f42c8: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x4f42c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_4f42cc:
    // 0x4f42cc: 0x40f809  jalr        $v0
label_4f42d0:
    if (ctx->pc == 0x4F42D0u) {
        ctx->pc = 0x4F42D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F42CCu;
        // 0x4f42d0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F42D4u;
        goto label_4f42d4;
    }
    ctx->pc = 0x4F42CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4F42D4u);
        ctx->pc = 0x4F42D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F42CCu;
        // 0x4f42d0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F42CCu, 0x4F42D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F42D4u;
label_4f42d4:
    // 0x4f42d4: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
label_4f42d8:
    if (ctx->pc == 0x4F42D8u) {
        ctx->pc = 0x4F42D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F42D4u;
        // 0x4f42d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F42DCu;
        goto label_4f42dc;
    }
    ctx->pc = 0x4F42D4u;
    {
        const bool branch_taken_0x4f42d4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x4F42D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F42D4u;
        // 0x4f42d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f42d4) {
            ctx->pc = 0x4F4318u;
            goto label_4f4318;
        }
    }
    ctx->pc = 0x4F42DCu;
label_4f42dc:
    // 0x4f42dc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x4f42dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4f42e0:
    // 0x4f42e0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x4f42e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4f42e4:
    // 0x4f42e4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x4f42e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4f42e8:
    // 0x4f42e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4f42e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4f42ec:
    // 0x4f42ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4f42ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4f42f0:
    // 0x4f42f0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4f42f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4f42f4:
    // 0x4f42f4: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_4f42f8:
    if (ctx->pc == 0x4F42F8u) {
        ctx->pc = 0x4F42F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F42F4u;
        // 0x4f42f8: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F42FCu;
        goto label_4f42fc;
    }
    ctx->pc = 0x4F42F4u;
    {
        const bool branch_taken_0x4f42f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F42F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F42F4u;
        // 0x4f42f8: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f42f4) {
            ctx->pc = 0x4F4314u;
            goto label_4f4314;
        }
    }
    ctx->pc = 0x4F42FCu;
label_4f42fc:
    // 0x4f42fc: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4f42fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_4f4300:
    // 0x4f4300: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4f4300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_4f4304:
    // 0x4f4304: 0x24425660  addiu       $v0, $v0, 0x5660
    ctx->pc = 0x4f4304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22112));
label_4f4308:
    // 0x4f4308: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f4308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4f430c:
    // 0x4f430c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4f430cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_4f4310:
    // 0x4f4310: 0xac8300d4  sw          $v1, 0xD4($a0)
    ctx->pc = 0x4f4310u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 3));
label_4f4314:
    // 0x4f4314: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4f4314u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f4318:
    // 0x4f4318: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4f4318u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f431c:
    // 0x4f431c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f431cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f4320:
    // 0x4f4320: 0x3e00008  jr          $ra
label_4f4324:
    if (ctx->pc == 0x4F4324u) {
        ctx->pc = 0x4F4324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4320u;
        // 0x4f4324: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F4328u;
        goto label_fallthrough_0x4f4320;
    }
    ctx->pc = 0x4F4320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F4324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4320u;
        // 0x4f4324: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F4320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4f4320:
    ctx->pc = 0x4F4328u;
}
