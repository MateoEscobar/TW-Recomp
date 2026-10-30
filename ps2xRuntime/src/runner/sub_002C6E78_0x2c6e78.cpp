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

// Function: sub_002C6E78
// Address: 0x2c6e78 - 0x2c6f98
void sub_002C6E78_0x2c6e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C6E78_0x2c6e78");
#endif

    switch (ctx->pc) {
        case 0x2c6e78u: goto label_2c6e78;
        case 0x2c6e7cu: goto label_2c6e7c;
        case 0x2c6e80u: goto label_2c6e80;
        case 0x2c6e84u: goto label_2c6e84;
        case 0x2c6e88u: goto label_2c6e88;
        case 0x2c6e8cu: goto label_2c6e8c;
        case 0x2c6e90u: goto label_2c6e90;
        case 0x2c6e94u: goto label_2c6e94;
        case 0x2c6e98u: goto label_2c6e98;
        case 0x2c6e9cu: goto label_2c6e9c;
        case 0x2c6ea0u: goto label_2c6ea0;
        case 0x2c6ea4u: goto label_2c6ea4;
        case 0x2c6ea8u: goto label_2c6ea8;
        case 0x2c6eacu: goto label_2c6eac;
        case 0x2c6eb0u: goto label_2c6eb0;
        case 0x2c6eb4u: goto label_2c6eb4;
        case 0x2c6eb8u: goto label_2c6eb8;
        case 0x2c6ebcu: goto label_2c6ebc;
        case 0x2c6ec0u: goto label_2c6ec0;
        case 0x2c6ec4u: goto label_2c6ec4;
        case 0x2c6ec8u: goto label_2c6ec8;
        case 0x2c6eccu: goto label_2c6ecc;
        case 0x2c6ed0u: goto label_2c6ed0;
        case 0x2c6ed4u: goto label_2c6ed4;
        case 0x2c6ed8u: goto label_2c6ed8;
        case 0x2c6edcu: goto label_2c6edc;
        case 0x2c6ee0u: goto label_2c6ee0;
        case 0x2c6ee4u: goto label_2c6ee4;
        case 0x2c6ee8u: goto label_2c6ee8;
        case 0x2c6eecu: goto label_2c6eec;
        case 0x2c6ef0u: goto label_2c6ef0;
        case 0x2c6ef4u: goto label_2c6ef4;
        case 0x2c6ef8u: goto label_2c6ef8;
        case 0x2c6efcu: goto label_2c6efc;
        case 0x2c6f00u: goto label_2c6f00;
        case 0x2c6f04u: goto label_2c6f04;
        case 0x2c6f08u: goto label_2c6f08;
        case 0x2c6f0cu: goto label_2c6f0c;
        case 0x2c6f10u: goto label_2c6f10;
        case 0x2c6f14u: goto label_2c6f14;
        case 0x2c6f18u: goto label_2c6f18;
        case 0x2c6f1cu: goto label_2c6f1c;
        case 0x2c6f20u: goto label_2c6f20;
        case 0x2c6f24u: goto label_2c6f24;
        case 0x2c6f28u: goto label_2c6f28;
        case 0x2c6f2cu: goto label_2c6f2c;
        case 0x2c6f30u: goto label_2c6f30;
        case 0x2c6f34u: goto label_2c6f34;
        case 0x2c6f38u: goto label_2c6f38;
        case 0x2c6f3cu: goto label_2c6f3c;
        case 0x2c6f40u: goto label_2c6f40;
        case 0x2c6f44u: goto label_2c6f44;
        case 0x2c6f48u: goto label_2c6f48;
        case 0x2c6f4cu: goto label_2c6f4c;
        case 0x2c6f50u: goto label_2c6f50;
        case 0x2c6f54u: goto label_2c6f54;
        case 0x2c6f58u: goto label_2c6f58;
        case 0x2c6f5cu: goto label_2c6f5c;
        case 0x2c6f60u: goto label_2c6f60;
        case 0x2c6f64u: goto label_2c6f64;
        case 0x2c6f68u: goto label_2c6f68;
        case 0x2c6f6cu: goto label_2c6f6c;
        case 0x2c6f70u: goto label_2c6f70;
        case 0x2c6f74u: goto label_2c6f74;
        case 0x2c6f78u: goto label_2c6f78;
        case 0x2c6f7cu: goto label_2c6f7c;
        case 0x2c6f80u: goto label_2c6f80;
        case 0x2c6f84u: goto label_2c6f84;
        case 0x2c6f88u: goto label_2c6f88;
        case 0x2c6f8cu: goto label_2c6f8c;
        case 0x2c6f90u: goto label_2c6f90;
        case 0x2c6f94u: goto label_2c6f94;
        default: break;
    }

    ctx->pc = 0x2c6e78u;

label_2c6e78:
    // 0x2c6e78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c6e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2c6e7c:
    // 0x2c6e7c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2c6e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2c6e80:
    // 0x2c6e80: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2c6e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2c6e84:
    // 0x2c6e84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c6e84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c6e88:
    // 0x2c6e88: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2c6e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_2c6e8c:
    // 0x2c6e8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c6e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2c6e90:
    // 0x2c6e90: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2c6e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c6e94:
    // 0x2c6e94: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2c6e94u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c6e98:
    // 0x2c6e98: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2c6e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2c6e9c:
    // 0x2c6e9c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2c6e9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2c6ea0:
    // 0x2c6ea0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c6ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c6ea4:
    // 0x2c6ea4: 0x40f809  jalr        $v0
label_2c6ea8:
    if (ctx->pc == 0x2C6EA8u) {
        ctx->pc = 0x2C6EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6EA4u;
        // 0x2c6ea8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6EACu;
        goto label_2c6eac;
    }
    ctx->pc = 0x2C6EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C6EACu);
        ctx->pc = 0x2C6EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6EA4u;
        // 0x2c6ea8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6EA4u, 0x2C6EACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C6EACu;
label_2c6eac:
    // 0x2c6eac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c6eacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c6eb0:
    // 0x2c6eb0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c6eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c6eb4:
    // 0x2c6eb4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2c6eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c6eb8:
    // 0x2c6eb8: 0xac40021c  sw          $zero, 0x21C($v0)
    ctx->pc = 0x2c6eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 540), GPR_U32(ctx, 0));
label_2c6ebc:
    // 0x2c6ebc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2c6ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c6ec0:
    // 0x2c6ec0: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x2c6ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
label_2c6ec4:
    // 0x2c6ec4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c6ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c6ec8:
    // 0x2c6ec8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2c6ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_2c6ecc:
    // 0x2c6ecc: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x2c6eccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
label_2c6ed0:
    // 0x2c6ed0: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x2c6ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2c6ed4:
    // 0x2c6ed4: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
label_2c6ed8:
    if (ctx->pc == 0x2C6ED8u) {
        ctx->pc = 0x2C6ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6ED4u;
        // 0x2c6ed8: 0x3c050056  lui         $a1, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6EDCu;
        goto label_2c6edc;
    }
    ctx->pc = 0x2C6ED4u;
    {
        const bool branch_taken_0x2c6ed4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2C6ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6ED4u;
        // 0x2c6ed8: 0x3c050056  lui         $a1, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6ed4) {
            ctx->pc = 0x2C6EE8u;
            goto label_2c6ee8;
        }
    }
    ctx->pc = 0x2C6EDCu;
label_2c6edc:
    // 0x2c6edc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c6edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c6ee0:
    // 0x2c6ee0: 0x10000006  b           . + 4 + (0x6 << 2)
label_2c6ee4:
    if (ctx->pc == 0x2C6EE4u) {
        ctx->pc = 0x2C6EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6EE0u;
        // 0x2c6ee4: 0x24a55648  addiu       $a1, $a1, 0x5648 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6EE8u;
        goto label_2c6ee8;
    }
    ctx->pc = 0x2C6EE0u;
    {
        const bool branch_taken_0x2c6ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6EE0u;
        // 0x2c6ee4: 0x24a55648  addiu       $a1, $a1, 0x5648 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6ee0) {
            ctx->pc = 0x2C6EFCu;
            goto label_2c6efc;
        }
    }
    ctx->pc = 0x2C6EE8u;
label_2c6ee8:
    // 0x2c6ee8: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_2c6eec:
    if (ctx->pc == 0x2C6EECu) {
        ctx->pc = 0x2C6EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6EE8u;
        // 0x2c6eec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6EF0u;
        goto label_2c6ef0;
    }
    ctx->pc = 0x2C6EE8u;
    {
        const bool branch_taken_0x2c6ee8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C6EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6EE8u;
        // 0x2c6eec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6ee8) {
            ctx->pc = 0x2C6F0Cu;
            goto label_2c6f0c;
        }
    }
    ctx->pc = 0x2C6EF0u;
label_2c6ef0:
    // 0x2c6ef0: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2c6ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_2c6ef4:
    // 0x2c6ef4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c6ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c6ef8:
    // 0x2c6ef8: 0x24a55658  addiu       $a1, $a1, 0x5658
    ctx->pc = 0x2c6ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22104));
label_2c6efc:
    // 0x2c6efc: 0xc08e2a2  jal         func_238A88
label_2c6f00:
    if (ctx->pc == 0x2C6F00u) {
        ctx->pc = 0x2C6F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6EFCu;
        // 0x2c6f00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6F04u;
        goto label_2c6f04;
    }
    ctx->pc = 0x2C6EFCu;
    SET_GPR_U32(ctx, 31, 0x2C6F04u);
    ctx->pc = 0x2C6F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6EFCu;
    // 0x2c6f00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238A88u, 0x2C6EFCu, 0x2C6F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6F04u;
label_2c6f04:
    // 0x2c6f04: 0x10000009  b           . + 4 + (0x9 << 2)
label_2c6f08:
    if (ctx->pc == 0x2C6F08u) {
        ctx->pc = 0x2C6F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6F04u;
        // 0x2c6f08: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6F0Cu;
        goto label_2c6f0c;
    }
    ctx->pc = 0x2C6F04u;
    {
        const bool branch_taken_0x2c6f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6F04u;
        // 0x2c6f08: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6f04) {
            ctx->pc = 0x2C6F2Cu;
            goto label_2c6f2c;
        }
    }
    ctx->pc = 0x2C6F0Cu;
label_2c6f0c:
    // 0x2c6f0c: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
label_2c6f10:
    if (ctx->pc == 0x2C6F10u) {
        ctx->pc = 0x2C6F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6F0Cu;
        // 0x2c6f10: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6F14u;
        goto label_2c6f14;
    }
    ctx->pc = 0x2C6F0Cu;
    {
        const bool branch_taken_0x2c6f0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c6f0c) {
            ctx->pc = 0x2C6F10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6F0Cu;
            // 0x2c6f10: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6F2Cu;
            goto label_2c6f2c;
        }
    }
    ctx->pc = 0x2C6F14u;
label_2c6f14:
    // 0x2c6f14: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2c6f14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_2c6f18:
    // 0x2c6f18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c6f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c6f1c:
    // 0x2c6f1c: 0x24a55668  addiu       $a1, $a1, 0x5668
    ctx->pc = 0x2c6f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22120));
label_2c6f20:
    // 0x2c6f20: 0xc08e2a2  jal         func_238A88
label_2c6f24:
    if (ctx->pc == 0x2C6F24u) {
        ctx->pc = 0x2C6F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6F20u;
        // 0x2c6f24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6F28u;
        goto label_2c6f28;
    }
    ctx->pc = 0x2C6F20u;
    SET_GPR_U32(ctx, 31, 0x2C6F28u);
    ctx->pc = 0x2C6F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6F20u;
    // 0x2c6f24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238A88u, 0x2C6F20u, 0x2C6F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6F28u;
label_2c6f28:
    // 0x2c6f28: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x2c6f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2c6f2c:
    // 0x2c6f2c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2c6f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2c6f30:
    // 0x2c6f30: 0x246310f8  addiu       $v1, $v1, 0x10F8
    ctx->pc = 0x2c6f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4344));
label_2c6f34:
    // 0x2c6f34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c6f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c6f38:
    // 0x2c6f38: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2c6f38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2c6f3c:
    // 0x2c6f3c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c6f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c6f40:
    // 0x2c6f40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c6f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2c6f44:
    // 0x2c6f44: 0xc08e064  jal         func_238190
label_2c6f48:
    if (ctx->pc == 0x2C6F48u) {
        ctx->pc = 0x2C6F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6F44u;
        // 0x2c6f48: 0x90450004  lbu         $a1, 0x4($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6F4Cu;
        goto label_2c6f4c;
    }
    ctx->pc = 0x2C6F44u;
    SET_GPR_U32(ctx, 31, 0x2C6F4Cu);
    ctx->pc = 0x2C6F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6F44u;
    // 0x2c6f48: 0x90450004  lbu         $a1, 0x4($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238190u, 0x2C6F44u, 0x2C6F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6F4Cu;
label_2c6f4c:
    // 0x2c6f4c: 0x86430092  lh          $v1, 0x92($s2)
    ctx->pc = 0x2c6f4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2c6f50:
    // 0x2c6f50: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2c6f50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_2c6f54:
    // 0x2c6f54: 0x24844b00  addiu       $a0, $a0, 0x4B00
    ctx->pc = 0x2c6f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
label_2c6f58:
    // 0x2c6f58: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x2c6f58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2c6f5c:
    // 0x2c6f5c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2c6f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2c6f60:
    // 0x2c6f60: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c6f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2c6f64:
    // 0x2c6f64: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2c6f64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2c6f68:
    // 0x2c6f68: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x2c6f68u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_2c6f6c:
    // 0x2c6f6c: 0x84a40030  lh          $a0, 0x30($a1)
    ctx->pc = 0x2c6f6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 48)));
label_2c6f70:
    // 0x2c6f70: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2c6f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_2c6f74:
    // 0x2c6f74: 0x40f809  jalr        $v0
label_2c6f78:
    if (ctx->pc == 0x2C6F78u) {
        ctx->pc = 0x2C6F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6F74u;
        // 0x2c6f78: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6F7Cu;
        goto label_2c6f7c;
    }
    ctx->pc = 0x2C6F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C6F7Cu);
        ctx->pc = 0x2C6F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6F74u;
        // 0x2c6f78: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6F74u, 0x2C6F7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C6F7Cu;
label_2c6f7c:
    // 0x2c6f7c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2c6f7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2c6f80:
    // 0x2c6f80: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2c6f80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c6f84:
    // 0x2c6f84: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2c6f84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c6f88:
    // 0x2c6f88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c6f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c6f8c:
    // 0x2c6f8c: 0x3e00008  jr          $ra
label_2c6f90:
    if (ctx->pc == 0x2C6F90u) {
        ctx->pc = 0x2C6F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6F8Cu;
        // 0x2c6f90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6F94u;
        goto label_2c6f94;
    }
    ctx->pc = 0x2C6F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6F8Cu;
        // 0x2c6f90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6F8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C6F94u;
label_2c6f94:
    // 0x2c6f94: 0x0  nop
    ctx->pc = 0x2c6f94u;
    // NOP
    ctx->pc = 0x2c6f98u;
}
