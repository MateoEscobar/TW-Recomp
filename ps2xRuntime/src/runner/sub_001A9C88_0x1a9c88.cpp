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

// Function: sub_001A9C88
// Address: 0x1a9c88 - 0x1a9d78
void sub_001A9C88_0x1a9c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9C88_0x1a9c88");
#endif

    switch (ctx->pc) {
        case 0x1a9c88u: goto label_1a9c88;
        case 0x1a9c8cu: goto label_1a9c8c;
        case 0x1a9c90u: goto label_1a9c90;
        case 0x1a9c94u: goto label_1a9c94;
        case 0x1a9c98u: goto label_1a9c98;
        case 0x1a9c9cu: goto label_1a9c9c;
        case 0x1a9ca0u: goto label_1a9ca0;
        case 0x1a9ca4u: goto label_1a9ca4;
        case 0x1a9ca8u: goto label_1a9ca8;
        case 0x1a9cacu: goto label_1a9cac;
        case 0x1a9cb0u: goto label_1a9cb0;
        case 0x1a9cb4u: goto label_1a9cb4;
        case 0x1a9cb8u: goto label_1a9cb8;
        case 0x1a9cbcu: goto label_1a9cbc;
        case 0x1a9cc0u: goto label_1a9cc0;
        case 0x1a9cc4u: goto label_1a9cc4;
        case 0x1a9cc8u: goto label_1a9cc8;
        case 0x1a9cccu: goto label_1a9ccc;
        case 0x1a9cd0u: goto label_1a9cd0;
        case 0x1a9cd4u: goto label_1a9cd4;
        case 0x1a9cd8u: goto label_1a9cd8;
        case 0x1a9cdcu: goto label_1a9cdc;
        case 0x1a9ce0u: goto label_1a9ce0;
        case 0x1a9ce4u: goto label_1a9ce4;
        case 0x1a9ce8u: goto label_1a9ce8;
        case 0x1a9cecu: goto label_1a9cec;
        case 0x1a9cf0u: goto label_1a9cf0;
        case 0x1a9cf4u: goto label_1a9cf4;
        case 0x1a9cf8u: goto label_1a9cf8;
        case 0x1a9cfcu: goto label_1a9cfc;
        case 0x1a9d00u: goto label_1a9d00;
        case 0x1a9d04u: goto label_1a9d04;
        case 0x1a9d08u: goto label_1a9d08;
        case 0x1a9d0cu: goto label_1a9d0c;
        case 0x1a9d10u: goto label_1a9d10;
        case 0x1a9d14u: goto label_1a9d14;
        case 0x1a9d18u: goto label_1a9d18;
        case 0x1a9d1cu: goto label_1a9d1c;
        case 0x1a9d20u: goto label_1a9d20;
        case 0x1a9d24u: goto label_1a9d24;
        case 0x1a9d28u: goto label_1a9d28;
        case 0x1a9d2cu: goto label_1a9d2c;
        case 0x1a9d30u: goto label_1a9d30;
        case 0x1a9d34u: goto label_1a9d34;
        case 0x1a9d38u: goto label_1a9d38;
        case 0x1a9d3cu: goto label_1a9d3c;
        case 0x1a9d40u: goto label_1a9d40;
        case 0x1a9d44u: goto label_1a9d44;
        case 0x1a9d48u: goto label_1a9d48;
        case 0x1a9d4cu: goto label_1a9d4c;
        case 0x1a9d50u: goto label_1a9d50;
        case 0x1a9d54u: goto label_1a9d54;
        case 0x1a9d58u: goto label_1a9d58;
        case 0x1a9d5cu: goto label_1a9d5c;
        case 0x1a9d60u: goto label_1a9d60;
        case 0x1a9d64u: goto label_1a9d64;
        case 0x1a9d68u: goto label_1a9d68;
        case 0x1a9d6cu: goto label_1a9d6c;
        case 0x1a9d70u: goto label_1a9d70;
        case 0x1a9d74u: goto label_1a9d74;
        default: break;
    }

    ctx->pc = 0x1a9c88u;

label_1a9c88:
    // 0x1a9c88: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a9c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1a9c8c:
    // 0x1a9c8c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1a9c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1a9c90:
    // 0x1a9c90: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1a9c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_1a9c94:
    // 0x1a9c94: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a9c94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a9c98:
    // 0x1a9c98: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1a9c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1a9c9c:
    // 0x1a9c9c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1a9c9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a9ca0:
    // 0x1a9ca0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a9ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a9ca4:
    // 0x1a9ca4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1a9ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1a9ca8:
    // 0x1a9ca8: 0x8e30000c  lw          $s0, 0xC($s1)
    ctx->pc = 0x1a9ca8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1a9cac:
    // 0x1a9cac: 0x8e320010  lw          $s2, 0x10($s1)
    ctx->pc = 0x1a9cacu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1a9cb0:
    // 0x1a9cb0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a9cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a9cb4:
    // 0x1a9cb4: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1a9cb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1a9cb8:
    // 0x1a9cb8: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1a9cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1a9cbc:
    // 0x1a9cbc: 0x60f809  jalr        $v1
label_1a9cc0:
    if (ctx->pc == 0x1A9CC0u) {
        ctx->pc = 0x1A9CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9CBCu;
        // 0x1a9cc0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9CC4u;
        goto label_1a9cc4;
    }
    ctx->pc = 0x1A9CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A9CC4u);
        ctx->pc = 0x1A9CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9CBCu;
        // 0x1a9cc0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9CBCu, 0x1A9CC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A9CC4u;
label_1a9cc4:
    // 0x1a9cc4: 0x52400007  beql        $s2, $zero, . + 4 + (0x7 << 2)
label_1a9cc8:
    if (ctx->pc == 0x1A9CC8u) {
        ctx->pc = 0x1A9CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9CC4u;
        // 0x1a9cc8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9CCCu;
        goto label_1a9ccc;
    }
    ctx->pc = 0x1A9CC4u;
    {
        const bool branch_taken_0x1a9cc4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9cc4) {
            ctx->pc = 0x1A9CC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9CC4u;
            // 0x1a9cc8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9CE4u;
            goto label_1a9ce4;
        }
    }
    ctx->pc = 0x1A9CCCu;
label_1a9ccc:
    // 0x1a9ccc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1a9cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1a9cd0:
    // 0x1a9cd0: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1a9cd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1a9cd4:
    // 0x1a9cd4: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1a9cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1a9cd8:
    // 0x1a9cd8: 0x60f809  jalr        $v1
label_1a9cdc:
    if (ctx->pc == 0x1A9CDCu) {
        ctx->pc = 0x1A9CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9CD8u;
        // 0x1a9cdc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9CE0u;
        goto label_1a9ce0;
    }
    ctx->pc = 0x1A9CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A9CE0u);
        ctx->pc = 0x1A9CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9CD8u;
        // 0x1a9cdc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9CD8u, 0x1A9CE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A9CE0u;
label_1a9ce0:
    // 0x1a9ce0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a9ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a9ce4:
    // 0x1a9ce4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a9ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a9ce8:
    // 0x1a9ce8: 0x84450018  lh          $a1, 0x18($v0)
    ctx->pc = 0x1a9ce8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_1a9cec:
    // 0x1a9cec: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1a9cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1a9cf0:
    // 0x1a9cf0: 0x60f809  jalr        $v1
label_1a9cf4:
    if (ctx->pc == 0x1A9CF4u) {
        ctx->pc = 0x1A9CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9CF0u;
        // 0x1a9cf4: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9CF8u;
        goto label_1a9cf8;
    }
    ctx->pc = 0x1A9CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A9CF8u);
        ctx->pc = 0x1A9CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9CF0u;
        // 0x1a9cf4: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9CF0u, 0x1A9CF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A9CF8u;
label_1a9cf8:
    // 0x1a9cf8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a9cf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a9cfc:
    // 0x1a9cfc: 0xc06a712  jal         func_1A9C48
label_1a9d00:
    if (ctx->pc == 0x1A9D00u) {
        ctx->pc = 0x1A9D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9CFCu;
        // 0x1a9d00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9D04u;
        goto label_1a9d04;
    }
    ctx->pc = 0x1A9CFCu;
    SET_GPR_U32(ctx, 31, 0x1A9D04u);
    ctx->pc = 0x1A9D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9CFCu;
    // 0x1a9d00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9C48u, 0x1A9CFCu, 0x1A9D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9D04u;
label_1a9d04:
    // 0x1a9d04: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1a9d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a9d08:
    // 0x1a9d08: 0xc6620170  lwc1        $f2, 0x170($s3)
    ctx->pc = 0x1a9d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a9d0c:
    // 0x1a9d0c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a9d0cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a9d10:
    // 0x1a9d10: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1a9d10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a9d14:
    // 0x1a9d14: 0x0  nop
    ctx->pc = 0x1a9d14u;
    // NOP
label_1a9d18:
    // 0x1a9d18: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_1a9d1c:
    if (ctx->pc == 0x1A9D1Cu) {
        ctx->pc = 0x1A9D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9D18u;
        // 0x1a9d1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9D20u;
        goto label_1a9d20;
    }
    ctx->pc = 0x1A9D18u;
    {
        const bool branch_taken_0x1a9d18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A9D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9D18u;
        // 0x1a9d1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9d18) {
            ctx->pc = 0x1A9D5Cu;
            goto label_1a9d5c;
        }
    }
    ctx->pc = 0x1A9D20u;
label_1a9d20:
    // 0x1a9d20: 0x8e620160  lw          $v0, 0x160($s3)
    ctx->pc = 0x1a9d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 352)));
label_1a9d24:
    // 0x1a9d24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a9d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a9d28:
    // 0x1a9d28: 0xae620160  sw          $v0, 0x160($s3)
    ctx->pc = 0x1a9d28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 352), GPR_U32(ctx, 2));
label_1a9d2c:
    // 0x1a9d2c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a9d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a9d30:
    // 0x1a9d30: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x1a9d30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_1a9d34:
    // 0x1a9d34: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x1a9d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_1a9d38:
    // 0x1a9d38: 0x40f809  jalr        $v0
label_1a9d3c:
    if (ctx->pc == 0x1A9D3Cu) {
        ctx->pc = 0x1A9D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9D38u;
        // 0x1a9d3c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9D40u;
        goto label_1a9d40;
    }
    ctx->pc = 0x1A9D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A9D40u);
        ctx->pc = 0x1A9D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9D38u;
        // 0x1a9d3c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9D38u, 0x1A9D40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A9D40u;
label_1a9d40:
    // 0x1a9d40: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_1a9d44:
    if (ctx->pc == 0x1A9D44u) {
        ctx->pc = 0x1A9D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9D40u;
        // 0x1a9d44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9D48u;
        goto label_1a9d48;
    }
    ctx->pc = 0x1A9D40u;
    {
        const bool branch_taken_0x1a9d40 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9D40u;
        // 0x1a9d44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9d40) {
            ctx->pc = 0x1A9D5Cu;
            goto label_1a9d5c;
        }
    }
    ctx->pc = 0x1A9D48u;
label_1a9d48:
    // 0x1a9d48: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1a9d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1a9d4c:
    // 0x1a9d4c: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1a9d4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1a9d50:
    // 0x1a9d50: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1a9d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1a9d54:
    // 0x1a9d54: 0x60f809  jalr        $v1
label_1a9d58:
    if (ctx->pc == 0x1A9D58u) {
        ctx->pc = 0x1A9D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9D54u;
        // 0x1a9d58: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9D5Cu;
        goto label_1a9d5c;
    }
    ctx->pc = 0x1A9D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A9D5Cu);
        ctx->pc = 0x1A9D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9D54u;
        // 0x1a9d58: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9D54u, 0x1A9D5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A9D5Cu;
label_1a9d5c:
    // 0x1a9d5c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1a9d5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1a9d60:
    // 0x1a9d60: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1a9d60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a9d64:
    // 0x1a9d64: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1a9d64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a9d68:
    // 0x1a9d68: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1a9d68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a9d6c:
    // 0x1a9d6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a9d6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a9d70:
    // 0x1a9d70: 0x3e00008  jr          $ra
label_1a9d74:
    if (ctx->pc == 0x1A9D74u) {
        ctx->pc = 0x1A9D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9D70u;
        // 0x1a9d74: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9D78u;
        goto label_fallthrough_0x1a9d70;
    }
    ctx->pc = 0x1A9D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9D70u;
        // 0x1a9d74: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9D70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a9d70:
    ctx->pc = 0x1A9D78u;
}
