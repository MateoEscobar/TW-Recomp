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

// Function: sub_002169E0
// Address: 0x2169e0 - 0x216a60
void sub_002169E0_0x2169e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002169E0_0x2169e0");
#endif

    switch (ctx->pc) {
        case 0x2169e0u: goto label_2169e0;
        case 0x2169e4u: goto label_2169e4;
        case 0x2169e8u: goto label_2169e8;
        case 0x2169ecu: goto label_2169ec;
        case 0x2169f0u: goto label_2169f0;
        case 0x2169f4u: goto label_2169f4;
        case 0x2169f8u: goto label_2169f8;
        case 0x2169fcu: goto label_2169fc;
        case 0x216a00u: goto label_216a00;
        case 0x216a04u: goto label_216a04;
        case 0x216a08u: goto label_216a08;
        case 0x216a0cu: goto label_216a0c;
        case 0x216a10u: goto label_216a10;
        case 0x216a14u: goto label_216a14;
        case 0x216a18u: goto label_216a18;
        case 0x216a1cu: goto label_216a1c;
        case 0x216a20u: goto label_216a20;
        case 0x216a24u: goto label_216a24;
        case 0x216a28u: goto label_216a28;
        case 0x216a2cu: goto label_216a2c;
        case 0x216a30u: goto label_216a30;
        case 0x216a34u: goto label_216a34;
        case 0x216a38u: goto label_216a38;
        case 0x216a3cu: goto label_216a3c;
        case 0x216a40u: goto label_216a40;
        case 0x216a44u: goto label_216a44;
        case 0x216a48u: goto label_216a48;
        case 0x216a4cu: goto label_216a4c;
        case 0x216a50u: goto label_216a50;
        case 0x216a54u: goto label_216a54;
        case 0x216a58u: goto label_216a58;
        case 0x216a5cu: goto label_216a5c;
        default: break;
    }

    ctx->pc = 0x2169e0u;

label_2169e0:
    // 0x2169e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2169e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2169e4:
    // 0x2169e4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2169e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2169e8:
    // 0x2169e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2169e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2169ec:
    // 0x2169ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2169ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2169f0:
    // 0x2169f0: 0x8e050088  lw          $a1, 0x88($s0)
    ctx->pc = 0x2169f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_2169f4:
    // 0x2169f4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2169f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2169f8:
    // 0x2169f8: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x2169f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_2169fc:
    // 0x2169fc: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x2169fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_216a00:
    // 0x216a00: 0x60f809  jalr        $v1
label_216a04:
    if (ctx->pc == 0x216A04u) {
        ctx->pc = 0x216A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216A00u;
        // 0x216a04: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216A08u;
        goto label_216a08;
    }
    ctx->pc = 0x216A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x216A08u);
        ctx->pc = 0x216A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216A00u;
        // 0x216a04: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216A00u, 0x216A08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x216A08u;
label_216a08:
    // 0x216a08: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x216a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_216a0c:
    // 0x216a0c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x216a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_216a10:
    // 0x216a10: 0xc4420100  lwc1        $f2, 0x100($v0)
    ctx->pc = 0x216a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_216a14:
    // 0x216a14: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x216a14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_216a18:
    // 0x216a18: 0xc4610104  lwc1        $f1, 0x104($v1)
    ctx->pc = 0x216a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_216a1c:
    // 0x216a1c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x216a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_216a20:
    // 0x216a20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x216a20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_216a24:
    // 0x216a24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x216a24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_216a28:
    // 0x216a28: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x216a28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_216a2c:
    // 0x216a2c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x216a2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_216a30:
    // 0x216a30: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x216a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_216a34:
    // 0x216a34: 0x8e070088  lw          $a3, 0x88($s0)
    ctx->pc = 0x216a34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_216a38:
    // 0x216a38: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x216a38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_216a3c:
    // 0x216a3c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x216a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_216a40:
    // 0x216a40: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x216a40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_216a44:
    // 0x216a44: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x216a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_216a48:
    // 0x216a48: 0x60f809  jalr        $v1
label_216a4c:
    if (ctx->pc == 0x216A4Cu) {
        ctx->pc = 0x216A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216A48u;
        // 0x216a4c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216A50u;
        goto label_216a50;
    }
    ctx->pc = 0x216A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x216A50u);
        ctx->pc = 0x216A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216A48u;
        // 0x216a4c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216A48u, 0x216A50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x216A50u;
label_216a50:
    // 0x216a50: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x216a50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_216a54:
    // 0x216a54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x216a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_216a58:
    // 0x216a58: 0x3e00008  jr          $ra
label_216a5c:
    if (ctx->pc == 0x216A5Cu) {
        ctx->pc = 0x216A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216A58u;
        // 0x216a5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216A60u;
        goto label_fallthrough_0x216a58;
    }
    ctx->pc = 0x216A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216A58u;
        // 0x216a5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216A58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x216a58:
    ctx->pc = 0x216A60u;
}
