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

// Function: sub_004EC0A0
// Address: 0x4ec0a0 - 0x4ec128
void sub_004EC0A0_0x4ec0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EC0A0_0x4ec0a0");
#endif

    switch (ctx->pc) {
        case 0x4ec0a0u: goto label_4ec0a0;
        case 0x4ec0a4u: goto label_4ec0a4;
        case 0x4ec0a8u: goto label_4ec0a8;
        case 0x4ec0acu: goto label_4ec0ac;
        case 0x4ec0b0u: goto label_4ec0b0;
        case 0x4ec0b4u: goto label_4ec0b4;
        case 0x4ec0b8u: goto label_4ec0b8;
        case 0x4ec0bcu: goto label_4ec0bc;
        case 0x4ec0c0u: goto label_4ec0c0;
        case 0x4ec0c4u: goto label_4ec0c4;
        case 0x4ec0c8u: goto label_4ec0c8;
        case 0x4ec0ccu: goto label_4ec0cc;
        case 0x4ec0d0u: goto label_4ec0d0;
        case 0x4ec0d4u: goto label_4ec0d4;
        case 0x4ec0d8u: goto label_4ec0d8;
        case 0x4ec0dcu: goto label_4ec0dc;
        case 0x4ec0e0u: goto label_4ec0e0;
        case 0x4ec0e4u: goto label_4ec0e4;
        case 0x4ec0e8u: goto label_4ec0e8;
        case 0x4ec0ecu: goto label_4ec0ec;
        case 0x4ec0f0u: goto label_4ec0f0;
        case 0x4ec0f4u: goto label_4ec0f4;
        case 0x4ec0f8u: goto label_4ec0f8;
        case 0x4ec0fcu: goto label_4ec0fc;
        case 0x4ec100u: goto label_4ec100;
        case 0x4ec104u: goto label_4ec104;
        case 0x4ec108u: goto label_4ec108;
        case 0x4ec10cu: goto label_4ec10c;
        case 0x4ec110u: goto label_4ec110;
        case 0x4ec114u: goto label_4ec114;
        case 0x4ec118u: goto label_4ec118;
        case 0x4ec11cu: goto label_4ec11c;
        case 0x4ec120u: goto label_4ec120;
        case 0x4ec124u: goto label_4ec124;
        default: break;
    }

    ctx->pc = 0x4ec0a0u;

label_4ec0a0:
    // 0x4ec0a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4ec0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4ec0a4:
    // 0x4ec0a4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4ec0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4ec0a8:
    // 0x4ec0a8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4ec0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4ec0ac:
    // 0x4ec0ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ec0acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ec0b0:
    // 0x4ec0b0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4ec0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4ec0b4:
    // 0x4ec0b4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4ec0b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4ec0b8:
    // 0x4ec0b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ec0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4ec0bc:
    // 0x4ec0bc: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4ec0c0:
    if (ctx->pc == 0x4EC0C0u) {
        ctx->pc = 0x4EC0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC0BCu;
        // 0x4ec0c0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC0C4u;
        goto label_4ec0c4;
    }
    ctx->pc = 0x4EC0BCu;
    {
        const bool branch_taken_0x4ec0bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EC0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC0BCu;
        // 0x4ec0c0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ec0bc) {
            ctx->pc = 0x4EC104u;
            goto label_4ec104;
        }
    }
    ctx->pc = 0x4EC0C4u;
label_4ec0c4:
    // 0x4ec0c4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4ec0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4ec0c8:
    // 0x4ec0c8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4ec0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4ec0cc:
    // 0x4ec0cc: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x4ec0ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_4ec0d0:
    // 0x4ec0d0: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x4ec0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_4ec0d4:
    // 0x4ec0d4: 0x60f809  jalr        $v1
label_4ec0d8:
    if (ctx->pc == 0x4EC0D8u) {
        ctx->pc = 0x4EC0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC0D4u;
        // 0x4ec0d8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC0DCu;
        goto label_4ec0dc;
    }
    ctx->pc = 0x4EC0D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EC0DCu);
        ctx->pc = 0x4EC0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC0D4u;
        // 0x4ec0d8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EC0D4u, 0x4EC0DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EC0DCu;
label_4ec0dc:
    // 0x4ec0dc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4ec0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4ec0e0:
    // 0x4ec0e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4ec0e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ec0e4:
    // 0x4ec0e4: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4ec0e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4ec0e8:
    // 0x4ec0e8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4ec0e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ec0ec:
    // 0x4ec0ec: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4ec0ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4ec0f0:
    // 0x4ec0f0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4ec0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4ec0f4:
    // 0x4ec0f4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4ec0f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4ec0f8:
    // 0x4ec0f8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4ec0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4ec0fc:
    // 0x4ec0fc: 0x60f809  jalr        $v1
label_4ec100:
    if (ctx->pc == 0x4EC100u) {
        ctx->pc = 0x4EC100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC0FCu;
        // 0x4ec100: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC104u;
        goto label_4ec104;
    }
    ctx->pc = 0x4EC0FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EC104u);
        ctx->pc = 0x4EC100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC0FCu;
        // 0x4ec100: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EC0FCu, 0x4EC104u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EC104u;
label_4ec104:
    // 0x4ec104: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4ec104u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ec108:
    // 0x4ec108: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4ec108u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ec10c:
    // 0x4ec10c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4ec10cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ec110:
    // 0x4ec110: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ec110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ec114:
    // 0x4ec114: 0x3e00008  jr          $ra
label_4ec118:
    if (ctx->pc == 0x4EC118u) {
        ctx->pc = 0x4EC118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC114u;
        // 0x4ec118: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC11Cu;
        goto label_4ec11c;
    }
    ctx->pc = 0x4EC114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EC118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC114u;
        // 0x4ec118: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EC114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EC11Cu;
label_4ec11c:
    // 0x4ec11c: 0x0  nop
    ctx->pc = 0x4ec11cu;
    // NOP
label_4ec120:
    // 0x4ec120: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x4ec120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4ec124:
    // 0x4ec124: 0x0  nop
    ctx->pc = 0x4ec124u;
    // NOP
    ctx->pc = 0x4ec128u;
}
