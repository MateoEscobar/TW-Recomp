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

// Function: sub_003E9EA0
// Address: 0x3e9ea0 - 0x3e9fd8
void sub_003E9EA0_0x3e9ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E9EA0_0x3e9ea0");
#endif

    switch (ctx->pc) {
        case 0x3e9ea0u: goto label_3e9ea0;
        case 0x3e9ea4u: goto label_3e9ea4;
        case 0x3e9ea8u: goto label_3e9ea8;
        case 0x3e9eacu: goto label_3e9eac;
        case 0x3e9eb0u: goto label_3e9eb0;
        case 0x3e9eb4u: goto label_3e9eb4;
        case 0x3e9eb8u: goto label_3e9eb8;
        case 0x3e9ebcu: goto label_3e9ebc;
        case 0x3e9ec0u: goto label_3e9ec0;
        case 0x3e9ec4u: goto label_3e9ec4;
        case 0x3e9ec8u: goto label_3e9ec8;
        case 0x3e9eccu: goto label_3e9ecc;
        case 0x3e9ed0u: goto label_3e9ed0;
        case 0x3e9ed4u: goto label_3e9ed4;
        case 0x3e9ed8u: goto label_3e9ed8;
        case 0x3e9edcu: goto label_3e9edc;
        case 0x3e9ee0u: goto label_3e9ee0;
        case 0x3e9ee4u: goto label_3e9ee4;
        case 0x3e9ee8u: goto label_3e9ee8;
        case 0x3e9eecu: goto label_3e9eec;
        case 0x3e9ef0u: goto label_3e9ef0;
        case 0x3e9ef4u: goto label_3e9ef4;
        case 0x3e9ef8u: goto label_3e9ef8;
        case 0x3e9efcu: goto label_3e9efc;
        case 0x3e9f00u: goto label_3e9f00;
        case 0x3e9f04u: goto label_3e9f04;
        case 0x3e9f08u: goto label_3e9f08;
        case 0x3e9f0cu: goto label_3e9f0c;
        case 0x3e9f10u: goto label_3e9f10;
        case 0x3e9f14u: goto label_3e9f14;
        case 0x3e9f18u: goto label_3e9f18;
        case 0x3e9f1cu: goto label_3e9f1c;
        case 0x3e9f20u: goto label_3e9f20;
        case 0x3e9f24u: goto label_3e9f24;
        case 0x3e9f28u: goto label_3e9f28;
        case 0x3e9f2cu: goto label_3e9f2c;
        case 0x3e9f30u: goto label_3e9f30;
        case 0x3e9f34u: goto label_3e9f34;
        case 0x3e9f38u: goto label_3e9f38;
        case 0x3e9f3cu: goto label_3e9f3c;
        case 0x3e9f40u: goto label_3e9f40;
        case 0x3e9f44u: goto label_3e9f44;
        case 0x3e9f48u: goto label_3e9f48;
        case 0x3e9f4cu: goto label_3e9f4c;
        case 0x3e9f50u: goto label_3e9f50;
        case 0x3e9f54u: goto label_3e9f54;
        case 0x3e9f58u: goto label_3e9f58;
        case 0x3e9f5cu: goto label_3e9f5c;
        case 0x3e9f60u: goto label_3e9f60;
        case 0x3e9f64u: goto label_3e9f64;
        case 0x3e9f68u: goto label_3e9f68;
        case 0x3e9f6cu: goto label_3e9f6c;
        case 0x3e9f70u: goto label_3e9f70;
        case 0x3e9f74u: goto label_3e9f74;
        case 0x3e9f78u: goto label_3e9f78;
        case 0x3e9f7cu: goto label_3e9f7c;
        case 0x3e9f80u: goto label_3e9f80;
        case 0x3e9f84u: goto label_3e9f84;
        case 0x3e9f88u: goto label_3e9f88;
        case 0x3e9f8cu: goto label_3e9f8c;
        case 0x3e9f90u: goto label_3e9f90;
        case 0x3e9f94u: goto label_3e9f94;
        case 0x3e9f98u: goto label_3e9f98;
        case 0x3e9f9cu: goto label_3e9f9c;
        case 0x3e9fa0u: goto label_3e9fa0;
        case 0x3e9fa4u: goto label_3e9fa4;
        case 0x3e9fa8u: goto label_3e9fa8;
        case 0x3e9facu: goto label_3e9fac;
        case 0x3e9fb0u: goto label_3e9fb0;
        case 0x3e9fb4u: goto label_3e9fb4;
        case 0x3e9fb8u: goto label_3e9fb8;
        case 0x3e9fbcu: goto label_3e9fbc;
        case 0x3e9fc0u: goto label_3e9fc0;
        case 0x3e9fc4u: goto label_3e9fc4;
        case 0x3e9fc8u: goto label_3e9fc8;
        case 0x3e9fccu: goto label_3e9fcc;
        case 0x3e9fd0u: goto label_3e9fd0;
        case 0x3e9fd4u: goto label_3e9fd4;
        default: break;
    }

    ctx->pc = 0x3e9ea0u;

label_3e9ea0:
    // 0x3e9ea0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3e9ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3e9ea4:
    // 0x3e9ea4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3e9ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_3e9ea8:
    // 0x3e9ea8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3e9ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_3e9eac:
    // 0x3e9eac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e9eacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e9eb0:
    // 0x3e9eb0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3e9eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_3e9eb4:
    // 0x3e9eb4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3e9eb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3e9eb8:
    // 0x3e9eb8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3e9eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3e9ebc:
    // 0x3e9ebc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3e9ebcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e9ec0:
    // 0x3e9ec0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3e9ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3e9ec4:
    // 0x3e9ec4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3e9ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3e9ec8:
    // 0x3e9ec8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e9ec8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e9ecc:
    // 0x3e9ecc: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e9eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e9ed0:
    // 0x3e9ed0: 0x40f809  jalr        $v0
label_3e9ed4:
    if (ctx->pc == 0x3E9ED4u) {
        ctx->pc = 0x3E9ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9ED0u;
        // 0x3e9ed4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9ED8u;
        goto label_3e9ed8;
    }
    ctx->pc = 0x3E9ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E9ED8u);
        ctx->pc = 0x3E9ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9ED0u;
        // 0x3e9ed4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E9ED0u, 0x3E9ED8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E9ED8u;
label_3e9ed8:
    // 0x3e9ed8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3e9ed8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e9edc:
    // 0x3e9edc: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x3e9edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3e9ee0:
    // 0x3e9ee0: 0x12020014  beq         $s0, $v0, . + 4 + (0x14 << 2)
label_3e9ee4:
    if (ctx->pc == 0x3E9EE4u) {
        ctx->pc = 0x3E9EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9EE0u;
        // 0x3e9ee4: 0x2e020016  sltiu       $v0, $s0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9EE8u;
        goto label_3e9ee8;
    }
    ctx->pc = 0x3E9EE0u;
    {
        const bool branch_taken_0x3e9ee0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E9EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9EE0u;
        // 0x3e9ee4: 0x2e020016  sltiu       $v0, $s0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9ee0) {
            ctx->pc = 0x3E9F34u;
            goto label_3e9f34;
        }
    }
    ctx->pc = 0x3E9EE8u;
label_3e9ee8:
    // 0x3e9ee8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3e9eec:
    if (ctx->pc == 0x3E9EECu) {
        ctx->pc = 0x3E9EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9EE8u;
        // 0x3e9eec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9EF0u;
        goto label_3e9ef0;
    }
    ctx->pc = 0x3E9EE8u;
    {
        const bool branch_taken_0x3e9ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9EE8u;
        // 0x3e9eec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9ee8) {
            ctx->pc = 0x3E9F08u;
            goto label_3e9f08;
        }
    }
    ctx->pc = 0x3E9EF0u;
label_3e9ef0:
    // 0x3e9ef0: 0x1202001f  beq         $s0, $v0, . + 4 + (0x1F << 2)
label_3e9ef4:
    if (ctx->pc == 0x3E9EF4u) {
        ctx->pc = 0x3E9EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9EF0u;
        // 0x3e9ef4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9EF8u;
        goto label_3e9ef8;
    }
    ctx->pc = 0x3E9EF0u;
    {
        const bool branch_taken_0x3e9ef0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E9EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9EF0u;
        // 0x3e9ef4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9ef0) {
            ctx->pc = 0x3E9F70u;
            goto label_3e9f70;
        }
    }
    ctx->pc = 0x3E9EF8u;
label_3e9ef8:
    // 0x3e9ef8: 0x12020015  beq         $s0, $v0, . + 4 + (0x15 << 2)
label_3e9efc:
    if (ctx->pc == 0x3E9EFCu) {
        ctx->pc = 0x3E9EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9EF8u;
        // 0x3e9efc: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9F00u;
        goto label_3e9f00;
    }
    ctx->pc = 0x3E9EF8u;
    {
        const bool branch_taken_0x3e9ef8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E9EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9EF8u;
        // 0x3e9efc: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9ef8) {
            ctx->pc = 0x3E9F50u;
            goto label_3e9f50;
        }
    }
    ctx->pc = 0x3E9F00u;
label_3e9f00:
    // 0x3e9f00: 0x1000002f  b           . + 4 + (0x2F << 2)
label_3e9f04:
    if (ctx->pc == 0x3E9F04u) {
        ctx->pc = 0x3E9F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9F00u;
        // 0x3e9f04: 0x7bb10060  lq          $s1, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9F08u;
        goto label_3e9f08;
    }
    ctx->pc = 0x3E9F00u;
    {
        const bool branch_taken_0x3e9f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9F00u;
        // 0x3e9f04: 0x7bb10060  lq          $s1, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9f00) {
            ctx->pc = 0x3E9FC0u;
            goto label_3e9fc0;
        }
    }
    ctx->pc = 0x3E9F08u;
label_3e9f08:
    // 0x3e9f08: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x3e9f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3e9f0c:
    // 0x3e9f0c: 0x1202002a  beq         $s0, $v0, . + 4 + (0x2A << 2)
label_3e9f10:
    if (ctx->pc == 0x3E9F10u) {
        ctx->pc = 0x3E9F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9F0Cu;
        // 0x3e9f10: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9F14u;
        goto label_3e9f14;
    }
    ctx->pc = 0x3E9F0Cu;
    {
        const bool branch_taken_0x3e9f0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E9F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9F0Cu;
        // 0x3e9f10: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9f0c) {
            ctx->pc = 0x3E9FB8u;
            goto label_3e9fb8;
        }
    }
    ctx->pc = 0x3E9F14u;
label_3e9f14:
    // 0x3e9f14: 0x16020029  bne         $s0, $v0, . + 4 + (0x29 << 2)
label_3e9f18:
    if (ctx->pc == 0x3E9F18u) {
        ctx->pc = 0x3E9F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9F14u;
        // 0x3e9f18: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9F1Cu;
        goto label_3e9f1c;
    }
    ctx->pc = 0x3E9F14u;
    {
        const bool branch_taken_0x3e9f14 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E9F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9F14u;
        // 0x3e9f18: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9f14) {
            ctx->pc = 0x3E9FBCu;
            goto label_3e9fbc;
        }
    }
    ctx->pc = 0x3E9F1Cu;
label_3e9f1c:
    // 0x3e9f1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e9f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e9f20:
    // 0x3e9f20: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3e9f20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e9f24:
    // 0x3e9f24: 0xc0fa798  jal         func_3E9E60
label_3e9f28:
    if (ctx->pc == 0x3E9F28u) {
        ctx->pc = 0x3E9F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9F24u;
        // 0x3e9f28: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9F2Cu;
        goto label_3e9f2c;
    }
    ctx->pc = 0x3E9F24u;
    SET_GPR_U32(ctx, 31, 0x3E9F2Cu);
    ctx->pc = 0x3E9F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9F24u;
    // 0x3e9f28: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E9E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E9E60u, 0x3E9F24u, 0x3E9F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9F2Cu;
label_3e9f2c:
    // 0x3e9f2c: 0x10000023  b           . + 4 + (0x23 << 2)
label_3e9f30:
    if (ctx->pc == 0x3E9F30u) {
        ctx->pc = 0x3E9F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9F2Cu;
        // 0x3e9f30: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9F34u;
        goto label_3e9f34;
    }
    ctx->pc = 0x3E9F2Cu;
    {
        const bool branch_taken_0x3e9f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9F2Cu;
        // 0x3e9f30: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9f2c) {
            ctx->pc = 0x3E9FBCu;
            goto label_3e9fbc;
        }
    }
    ctx->pc = 0x3E9F34u;
label_3e9f34:
    // 0x3e9f34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e9f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e9f38:
    // 0x3e9f38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e9f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e9f3c:
    // 0x3e9f3c: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x3e9f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_3e9f40:
    // 0x3e9f40: 0xc0ea16a  jal         func_3A85A8
label_3e9f44:
    if (ctx->pc == 0x3E9F44u) {
        ctx->pc = 0x3E9F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9F40u;
        // 0x3e9f44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9F48u;
        goto label_3e9f48;
    }
    ctx->pc = 0x3E9F40u;
    SET_GPR_U32(ctx, 31, 0x3E9F48u);
    ctx->pc = 0x3E9F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9F40u;
    // 0x3e9f44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3E9F40u, 0x3E9F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9F48u;
label_3e9f48:
    // 0x3e9f48: 0xc0e8616  jal         func_3A1858
label_3e9f4c:
    if (ctx->pc == 0x3E9F4Cu) {
        ctx->pc = 0x3E9F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9F48u;
        // 0x3e9f4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9F50u;
        goto label_3e9f50;
    }
    ctx->pc = 0x3E9F48u;
    SET_GPR_U32(ctx, 31, 0x3E9F50u);
    ctx->pc = 0x3E9F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9F48u;
    // 0x3e9f4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1858u, 0x3E9F48u, 0x3E9F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9F50u;
label_3e9f50:
    // 0x3e9f50: 0xc0ea146  jal         func_3A8518
label_3e9f54:
    if (ctx->pc == 0x3E9F54u) {
        ctx->pc = 0x3E9F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9F50u;
        // 0x3e9f54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9F58u;
        goto label_3e9f58;
    }
    ctx->pc = 0x3E9F50u;
    SET_GPR_U32(ctx, 31, 0x3E9F58u);
    ctx->pc = 0x3E9F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9F50u;
    // 0x3e9f54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E9F50u, 0x3E9F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9F58u;
label_3e9f58:
    // 0x3e9f58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3e9f5c:
    if (ctx->pc == 0x3E9F5Cu) {
        ctx->pc = 0x3E9F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9F58u;
        // 0x3e9f5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9F60u;
        goto label_3e9f60;
    }
    ctx->pc = 0x3E9F58u;
    {
        const bool branch_taken_0x3e9f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E9F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9F58u;
        // 0x3e9f5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9f58) {
            ctx->pc = 0x3E9F68u;
            goto label_3e9f68;
        }
    }
    ctx->pc = 0x3E9F60u;
label_3e9f60:
    // 0x3e9f60: 0x10000015  b           . + 4 + (0x15 << 2)
label_3e9f64:
    if (ctx->pc == 0x3E9F64u) {
        ctx->pc = 0x3E9F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9F60u;
        // 0x3e9f64: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9F68u;
        goto label_3e9f68;
    }
    ctx->pc = 0x3E9F60u;
    {
        const bool branch_taken_0x3e9f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9F60u;
        // 0x3e9f64: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9f60) {
            ctx->pc = 0x3E9FB8u;
            goto label_3e9fb8;
        }
    }
    ctx->pc = 0x3E9F68u;
label_3e9f68:
    // 0x3e9f68: 0x10000013  b           . + 4 + (0x13 << 2)
label_3e9f6c:
    if (ctx->pc == 0x3E9F6Cu) {
        ctx->pc = 0x3E9F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9F68u;
        // 0x3e9f6c: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9F70u;
        goto label_3e9f70;
    }
    ctx->pc = 0x3E9F68u;
    {
        const bool branch_taken_0x3e9f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9F68u;
        // 0x3e9f6c: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9f68) {
            ctx->pc = 0x3E9FB8u;
            goto label_3e9fb8;
        }
    }
    ctx->pc = 0x3E9F70u;
label_3e9f70:
    // 0x3e9f70: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3e9f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3e9f74:
    // 0x3e9f74: 0xc0ea12a  jal         func_3A84A8
label_3e9f78:
    if (ctx->pc == 0x3E9F78u) {
        ctx->pc = 0x3E9F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9F74u;
        // 0x3e9f78: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9F7Cu;
        goto label_3e9f7c;
    }
    ctx->pc = 0x3E9F74u;
    SET_GPR_U32(ctx, 31, 0x3E9F7Cu);
    ctx->pc = 0x3E9F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9F74u;
    // 0x3e9f78: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E9F74u, 0x3E9F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9F7Cu;
label_3e9f7c:
    // 0x3e9f7c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3e9f7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e9f80:
    // 0x3e9f80: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3e9f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3e9f84:
    // 0x3e9f84: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3e9f84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e9f88:
    // 0x3e9f88: 0xc0ea12a  jal         func_3A84A8
label_3e9f8c:
    if (ctx->pc == 0x3E9F8Cu) {
        ctx->pc = 0x3E9F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9F88u;
        // 0x3e9f8c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9F90u;
        goto label_3e9f90;
    }
    ctx->pc = 0x3E9F88u;
    SET_GPR_U32(ctx, 31, 0x3E9F90u);
    ctx->pc = 0x3E9F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9F88u;
    // 0x3e9f8c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E9F88u, 0x3E9F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9F90u;
label_3e9f90:
    // 0x3e9f90: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3e9f90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e9f94:
    // 0x3e9f94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e9f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e9f98:
    // 0x3e9f98: 0xc0ea146  jal         func_3A8518
label_3e9f9c:
    if (ctx->pc == 0x3E9F9Cu) {
        ctx->pc = 0x3E9F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9F98u;
        // 0x3e9f9c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9FA0u;
        goto label_3e9fa0;
    }
    ctx->pc = 0x3E9F98u;
    SET_GPR_U32(ctx, 31, 0x3E9FA0u);
    ctx->pc = 0x3E9F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9F98u;
    // 0x3e9f9c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E9F98u, 0x3E9FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9FA0u;
label_3e9fa0:
    // 0x3e9fa0: 0xc0ea146  jal         func_3A8518
label_3e9fa4:
    if (ctx->pc == 0x3E9FA4u) {
        ctx->pc = 0x3E9FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9FA0u;
        // 0x3e9fa4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9FA8u;
        goto label_3e9fa8;
    }
    ctx->pc = 0x3E9FA0u;
    SET_GPR_U32(ctx, 31, 0x3E9FA8u);
    ctx->pc = 0x3E9FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9FA0u;
    // 0x3e9fa4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E9FA0u, 0x3E9FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9FA8u;
label_3e9fa8:
    // 0x3e9fa8: 0xc0ea14c  jal         func_3A8530
label_3e9fac:
    if (ctx->pc == 0x3E9FACu) {
        ctx->pc = 0x3E9FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9FA8u;
        // 0x3e9fac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9FB0u;
        goto label_3e9fb0;
    }
    ctx->pc = 0x3E9FA8u;
    SET_GPR_U32(ctx, 31, 0x3E9FB0u);
    ctx->pc = 0x3E9FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9FA8u;
    // 0x3e9fac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3E9FA8u, 0x3E9FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9FB0u;
label_3e9fb0:
    // 0x3e9fb0: 0xc0ea14c  jal         func_3A8530
label_3e9fb4:
    if (ctx->pc == 0x3E9FB4u) {
        ctx->pc = 0x3E9FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9FB0u;
        // 0x3e9fb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9FB8u;
        goto label_3e9fb8;
    }
    ctx->pc = 0x3E9FB0u;
    SET_GPR_U32(ctx, 31, 0x3E9FB8u);
    ctx->pc = 0x3E9FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9FB0u;
    // 0x3e9fb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3E9FB0u, 0x3E9FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9FB8u;
label_3e9fb8:
    // 0x3e9fb8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3e9fb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3e9fbc:
    // 0x3e9fbc: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3e9fbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3e9fc0:
    // 0x3e9fc0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3e9fc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3e9fc4:
    // 0x3e9fc4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3e9fc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3e9fc8:
    // 0x3e9fc8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3e9fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3e9fcc:
    // 0x3e9fcc: 0x3e00008  jr          $ra
label_3e9fd0:
    if (ctx->pc == 0x3E9FD0u) {
        ctx->pc = 0x3E9FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9FCCu;
        // 0x3e9fd0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9FD4u;
        goto label_3e9fd4;
    }
    ctx->pc = 0x3E9FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E9FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9FCCu;
        // 0x3e9fd0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E9FCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E9FD4u;
label_3e9fd4:
    // 0x3e9fd4: 0x0  nop
    ctx->pc = 0x3e9fd4u;
    // NOP
    ctx->pc = 0x3e9fd8u;
}
