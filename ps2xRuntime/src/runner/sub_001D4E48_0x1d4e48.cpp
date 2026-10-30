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

// Function: sub_001D4E48
// Address: 0x1d4e48 - 0x1d4f20
void sub_001D4E48_0x1d4e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D4E48_0x1d4e48");
#endif

    switch (ctx->pc) {
        case 0x1d4e48u: goto label_1d4e48;
        case 0x1d4e4cu: goto label_1d4e4c;
        case 0x1d4e50u: goto label_1d4e50;
        case 0x1d4e54u: goto label_1d4e54;
        case 0x1d4e58u: goto label_1d4e58;
        case 0x1d4e5cu: goto label_1d4e5c;
        case 0x1d4e60u: goto label_1d4e60;
        case 0x1d4e64u: goto label_1d4e64;
        case 0x1d4e68u: goto label_1d4e68;
        case 0x1d4e6cu: goto label_1d4e6c;
        case 0x1d4e70u: goto label_1d4e70;
        case 0x1d4e74u: goto label_1d4e74;
        case 0x1d4e78u: goto label_1d4e78;
        case 0x1d4e7cu: goto label_1d4e7c;
        case 0x1d4e80u: goto label_1d4e80;
        case 0x1d4e84u: goto label_1d4e84;
        case 0x1d4e88u: goto label_1d4e88;
        case 0x1d4e8cu: goto label_1d4e8c;
        case 0x1d4e90u: goto label_1d4e90;
        case 0x1d4e94u: goto label_1d4e94;
        case 0x1d4e98u: goto label_1d4e98;
        case 0x1d4e9cu: goto label_1d4e9c;
        case 0x1d4ea0u: goto label_1d4ea0;
        case 0x1d4ea4u: goto label_1d4ea4;
        case 0x1d4ea8u: goto label_1d4ea8;
        case 0x1d4eacu: goto label_1d4eac;
        case 0x1d4eb0u: goto label_1d4eb0;
        case 0x1d4eb4u: goto label_1d4eb4;
        case 0x1d4eb8u: goto label_1d4eb8;
        case 0x1d4ebcu: goto label_1d4ebc;
        case 0x1d4ec0u: goto label_1d4ec0;
        case 0x1d4ec4u: goto label_1d4ec4;
        case 0x1d4ec8u: goto label_1d4ec8;
        case 0x1d4eccu: goto label_1d4ecc;
        case 0x1d4ed0u: goto label_1d4ed0;
        case 0x1d4ed4u: goto label_1d4ed4;
        case 0x1d4ed8u: goto label_1d4ed8;
        case 0x1d4edcu: goto label_1d4edc;
        case 0x1d4ee0u: goto label_1d4ee0;
        case 0x1d4ee4u: goto label_1d4ee4;
        case 0x1d4ee8u: goto label_1d4ee8;
        case 0x1d4eecu: goto label_1d4eec;
        case 0x1d4ef0u: goto label_1d4ef0;
        case 0x1d4ef4u: goto label_1d4ef4;
        case 0x1d4ef8u: goto label_1d4ef8;
        case 0x1d4efcu: goto label_1d4efc;
        case 0x1d4f00u: goto label_1d4f00;
        case 0x1d4f04u: goto label_1d4f04;
        case 0x1d4f08u: goto label_1d4f08;
        case 0x1d4f0cu: goto label_1d4f0c;
        case 0x1d4f10u: goto label_1d4f10;
        case 0x1d4f14u: goto label_1d4f14;
        case 0x1d4f18u: goto label_1d4f18;
        case 0x1d4f1cu: goto label_1d4f1c;
        default: break;
    }

    ctx->pc = 0x1d4e48u;

label_1d4e48:
    // 0x1d4e48: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1d4e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1d4e4c:
    // 0x1d4e4c: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x1d4e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_1d4e50:
    // 0x1d4e50: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1d4e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_1d4e54:
    // 0x1d4e54: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1d4e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_1d4e58:
    // 0x1d4e58: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1d4e58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1d4e5c:
    // 0x1d4e5c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1d4e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_1d4e60:
    // 0x1d4e60: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1d4e60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4e64:
    // 0x1d4e64: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1d4e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_1d4e68:
    // 0x1d4e68: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1d4e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_1d4e6c:
    // 0x1d4e6c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1d4e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1d4e70:
    // 0x1d4e70: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x1d4e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_1d4e74:
    // 0x1d4e74: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x1d4e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_1d4e78:
    // 0x1d4e78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d4e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1d4e7c:
    // 0x1d4e7c: 0x8c910004  lw          $s1, 0x4($a0)
    ctx->pc = 0x1d4e7cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1d4e80:
    // 0x1d4e80: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1d4e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1d4e84:
    // 0x1d4e84: 0x1222001b  beq         $s1, $v0, . + 4 + (0x1B << 2)
label_1d4e88:
    if (ctx->pc == 0x1D4E88u) {
        ctx->pc = 0x1D4E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E84u;
        // 0x1d4e88: 0x30b500ff  andi        $s5, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4E8Cu;
        goto label_1d4e8c;
    }
    ctx->pc = 0x1D4E84u;
    {
        const bool branch_taken_0x1d4e84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D4E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E84u;
        // 0x1d4e88: 0x30b500ff  andi        $s5, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4e84) {
            ctx->pc = 0x1D4EF4u;
            goto label_1d4ef4;
        }
    }
    ctx->pc = 0x1D4E8Cu;
label_1d4e8c:
    // 0x1d4e8c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1d4e8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d4e90:
    // 0x1d4e90: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x1d4e90u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d4e94:
    // 0x1d4e94: 0x241600ff  addiu       $s6, $zero, 0xFF
    ctx->pc = 0x1d4e94u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1d4e98:
    // 0x1d4e98: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1d4e98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d4e9c:
    // 0x1d4e9c: 0x0  nop
    ctx->pc = 0x1d4e9cu;
    // NOP
label_1d4ea0:
    // 0x1d4ea0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d4ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d4ea4:
    // 0x1d4ea4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x1d4ea4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_1d4ea8:
    // 0x1d4ea8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1d4ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_1d4eac:
    // 0x1d4eac: 0x40f809  jalr        $v0
label_1d4eb0:
    if (ctx->pc == 0x1D4EB0u) {
        ctx->pc = 0x1D4EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4EACu;
        // 0x1d4eb0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4EB4u;
        goto label_1d4eb4;
    }
    ctx->pc = 0x1D4EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D4EB4u);
        ctx->pc = 0x1D4EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4EACu;
        // 0x1d4eb0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4EACu, 0x1D4EB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D4EB4u;
label_1d4eb4:
    // 0x1d4eb4: 0x12720003  beq         $s3, $s2, . + 4 + (0x3 << 2)
label_1d4eb8:
    if (ctx->pc == 0x1D4EB8u) {
        ctx->pc = 0x1D4EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4EB4u;
        // 0x1d4eb8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4EBCu;
        goto label_1d4ebc;
    }
    ctx->pc = 0x1D4EB4u;
    {
        const bool branch_taken_0x1d4eb4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 18));
        ctx->pc = 0x1D4EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4EB4u;
        // 0x1d4eb8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4eb4) {
            ctx->pc = 0x1D4EC4u;
            goto label_1d4ec4;
        }
    }
    ctx->pc = 0x1D4EBCu;
label_1d4ebc:
    // 0x1d4ebc: 0x56570002  bnel        $s2, $s7, . + 4 + (0x2 << 2)
label_1d4ec0:
    if (ctx->pc == 0x1D4EC0u) {
        ctx->pc = 0x1D4EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4EBCu;
        // 0x1d4ec0: 0xa3b60003  sb          $s6, 0x3($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4EC4u;
        goto label_1d4ec4;
    }
    ctx->pc = 0x1D4EBCu;
    {
        const bool branch_taken_0x1d4ebc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 23));
        if (branch_taken_0x1d4ebc) {
            ctx->pc = 0x1D4EC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4EBCu;
            // 0x1d4ec0: 0xa3b60003  sb          $s6, 0x3($sp) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4EC8u;
            goto label_1d4ec8;
        }
    }
    ctx->pc = 0x1D4EC4u;
label_1d4ec4:
    // 0x1d4ec4: 0xa3b50003  sb          $s5, 0x3($sp)
    ctx->pc = 0x1d4ec4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 21));
label_1d4ec8:
    // 0x1d4ec8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d4ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d4ecc:
    // 0x1d4ecc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1d4eccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1d4ed0:
    // 0x1d4ed0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d4ed0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1d4ed4:
    // 0x1d4ed4: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1d4ed4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1d4ed8:
    // 0x1d4ed8: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x1d4ed8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_1d4edc:
    // 0x1d4edc: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1d4edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_1d4ee0:
    // 0x1d4ee0: 0x60f809  jalr        $v1
label_1d4ee4:
    if (ctx->pc == 0x1D4EE4u) {
        ctx->pc = 0x1D4EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4EE0u;
        // 0x1d4ee4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4EE8u;
        goto label_1d4ee8;
    }
    ctx->pc = 0x1D4EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D4EE8u);
        ctx->pc = 0x1D4EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4EE0u;
        // 0x1d4ee4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4EE0u, 0x1D4EE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D4EE8u;
label_1d4ee8:
    // 0x1d4ee8: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x1d4ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1d4eec:
    // 0x1d4eec: 0x5622ffec  bnel        $s1, $v0, . + 4 + (-0x14 << 2)
label_1d4ef0:
    if (ctx->pc == 0x1D4EF0u) {
        ctx->pc = 0x1D4EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4EECu;
        // 0x1d4ef0: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4EF4u;
        goto label_1d4ef4;
    }
    ctx->pc = 0x1D4EECu;
    {
        const bool branch_taken_0x1d4eec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d4eec) {
            ctx->pc = 0x1D4EF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4EECu;
            // 0x1d4ef0: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4EA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4ea0;
        }
    }
    ctx->pc = 0x1D4EF4u;
label_1d4ef4:
    // 0x1d4ef4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1d4ef4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1d4ef8:
    // 0x1d4ef8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1d4ef8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1d4efc:
    // 0x1d4efc: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1d4efcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1d4f00:
    // 0x1d4f00: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1d4f00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1d4f04:
    // 0x1d4f04: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1d4f04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1d4f08:
    // 0x1d4f08: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x1d4f08u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d4f0c:
    // 0x1d4f0c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x1d4f0cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d4f10:
    // 0x1d4f10: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x1d4f10u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d4f14:
    // 0x1d4f14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d4f14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d4f18:
    // 0x1d4f18: 0x3e00008  jr          $ra
label_1d4f1c:
    if (ctx->pc == 0x1D4F1Cu) {
        ctx->pc = 0x1D4F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F18u;
        // 0x1d4f1c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4F20u;
        goto label_fallthrough_0x1d4f18;
    }
    ctx->pc = 0x1D4F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F18u;
        // 0x1d4f1c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4F18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d4f18:
    ctx->pc = 0x1D4F20u;
}
