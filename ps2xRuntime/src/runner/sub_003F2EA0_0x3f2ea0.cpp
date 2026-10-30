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

// Function: sub_003F2EA0
// Address: 0x3f2ea0 - 0x3f2f18
void sub_003F2EA0_0x3f2ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F2EA0_0x3f2ea0");
#endif

    switch (ctx->pc) {
        case 0x3f2ea0u: goto label_3f2ea0;
        case 0x3f2ea4u: goto label_3f2ea4;
        case 0x3f2ea8u: goto label_3f2ea8;
        case 0x3f2eacu: goto label_3f2eac;
        case 0x3f2eb0u: goto label_3f2eb0;
        case 0x3f2eb4u: goto label_3f2eb4;
        case 0x3f2eb8u: goto label_3f2eb8;
        case 0x3f2ebcu: goto label_3f2ebc;
        case 0x3f2ec0u: goto label_3f2ec0;
        case 0x3f2ec4u: goto label_3f2ec4;
        case 0x3f2ec8u: goto label_3f2ec8;
        case 0x3f2eccu: goto label_3f2ecc;
        case 0x3f2ed0u: goto label_3f2ed0;
        case 0x3f2ed4u: goto label_3f2ed4;
        case 0x3f2ed8u: goto label_3f2ed8;
        case 0x3f2edcu: goto label_3f2edc;
        case 0x3f2ee0u: goto label_3f2ee0;
        case 0x3f2ee4u: goto label_3f2ee4;
        case 0x3f2ee8u: goto label_3f2ee8;
        case 0x3f2eecu: goto label_3f2eec;
        case 0x3f2ef0u: goto label_3f2ef0;
        case 0x3f2ef4u: goto label_3f2ef4;
        case 0x3f2ef8u: goto label_3f2ef8;
        case 0x3f2efcu: goto label_3f2efc;
        case 0x3f2f00u: goto label_3f2f00;
        case 0x3f2f04u: goto label_3f2f04;
        case 0x3f2f08u: goto label_3f2f08;
        case 0x3f2f0cu: goto label_3f2f0c;
        case 0x3f2f10u: goto label_3f2f10;
        case 0x3f2f14u: goto label_3f2f14;
        default: break;
    }

    ctx->pc = 0x3f2ea0u;

label_3f2ea0:
    // 0x3f2ea0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3f2ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3f2ea4:
    // 0x3f2ea4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3f2ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3f2ea8:
    // 0x3f2ea8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f2ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3f2eac:
    // 0x3f2eac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f2eacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f2eb0:
    // 0x3f2eb0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3f2eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3f2eb4:
    // 0x3f2eb4: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3f2eb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f2eb8:
    // 0x3f2eb8: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f2eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f2ebc:
    // 0x3f2ebc: 0x40f809  jalr        $v0
label_3f2ec0:
    if (ctx->pc == 0x3F2EC0u) {
        ctx->pc = 0x3F2EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2EBCu;
        // 0x3f2ec0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2EC4u;
        goto label_3f2ec4;
    }
    ctx->pc = 0x3F2EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F2EC4u);
        ctx->pc = 0x3F2EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2EBCu;
        // 0x3f2ec0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F2EBCu, 0x3F2EC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F2EC4u;
label_3f2ec4:
    // 0x3f2ec4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f2ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f2ec8:
    // 0x3f2ec8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3f2ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f2ecc:
    // 0x3f2ecc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x3f2eccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_3f2ed0:
    // 0x3f2ed0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_3f2ed4:
    if (ctx->pc == 0x3F2ED4u) {
        ctx->pc = 0x3F2ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2ED0u;
        // 0x3f2ed4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2ED8u;
        goto label_3f2ed8;
    }
    ctx->pc = 0x3F2ED0u;
    {
        const bool branch_taken_0x3f2ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2ED0u;
        // 0x3f2ed4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2ed0) {
            ctx->pc = 0x3F2F08u;
            goto label_3f2f08;
        }
    }
    ctx->pc = 0x3F2ED8u;
label_3f2ed8:
    // 0x3f2ed8: 0xc60000bc  lwc1        $f0, 0xBC($s0)
    ctx->pc = 0x3f2ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f2edc:
    // 0x3f2edc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3f2edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3f2ee0:
    // 0x3f2ee0: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x3f2ee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_3f2ee4:
    // 0x3f2ee4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3f2ee4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f2ee8:
    // 0x3f2ee8: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x3f2ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_3f2eec:
    // 0x3f2eec: 0xae0200b4  sw          $v0, 0xB4($s0)
    ctx->pc = 0x3f2eecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
label_3f2ef0:
    // 0x3f2ef0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3f2ef0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3f2ef4:
    // 0x3f2ef4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3f2ef4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f2ef8:
    // 0x3f2ef8: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x3f2ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
label_3f2efc:
    // 0x3f2efc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3f2efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f2f00:
    // 0x3f2f00: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3f2f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3f2f04:
    // 0x3f2f04: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3f2f04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_3f2f08:
    // 0x3f2f08: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3f2f08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f2f0c:
    // 0x3f2f0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f2f0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3f2f10:
    // 0x3f2f10: 0x3e00008  jr          $ra
label_3f2f14:
    if (ctx->pc == 0x3F2F14u) {
        ctx->pc = 0x3F2F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2F10u;
        // 0x3f2f14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2F18u;
        goto label_fallthrough_0x3f2f10;
    }
    ctx->pc = 0x3F2F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F2F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2F10u;
        // 0x3f2f14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F2F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3f2f10:
    ctx->pc = 0x3F2F18u;
}
