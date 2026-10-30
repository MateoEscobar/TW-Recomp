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

// Function: sub_003E8EB0
// Address: 0x3e8eb0 - 0x3e8f98
void sub_003E8EB0_0x3e8eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E8EB0_0x3e8eb0");
#endif

    switch (ctx->pc) {
        case 0x3e8eb0u: goto label_3e8eb0;
        case 0x3e8eb4u: goto label_3e8eb4;
        case 0x3e8eb8u: goto label_3e8eb8;
        case 0x3e8ebcu: goto label_3e8ebc;
        case 0x3e8ec0u: goto label_3e8ec0;
        case 0x3e8ec4u: goto label_3e8ec4;
        case 0x3e8ec8u: goto label_3e8ec8;
        case 0x3e8eccu: goto label_3e8ecc;
        case 0x3e8ed0u: goto label_3e8ed0;
        case 0x3e8ed4u: goto label_3e8ed4;
        case 0x3e8ed8u: goto label_3e8ed8;
        case 0x3e8edcu: goto label_3e8edc;
        case 0x3e8ee0u: goto label_3e8ee0;
        case 0x3e8ee4u: goto label_3e8ee4;
        case 0x3e8ee8u: goto label_3e8ee8;
        case 0x3e8eecu: goto label_3e8eec;
        case 0x3e8ef0u: goto label_3e8ef0;
        case 0x3e8ef4u: goto label_3e8ef4;
        case 0x3e8ef8u: goto label_3e8ef8;
        case 0x3e8efcu: goto label_3e8efc;
        case 0x3e8f00u: goto label_3e8f00;
        case 0x3e8f04u: goto label_3e8f04;
        case 0x3e8f08u: goto label_3e8f08;
        case 0x3e8f0cu: goto label_3e8f0c;
        case 0x3e8f10u: goto label_3e8f10;
        case 0x3e8f14u: goto label_3e8f14;
        case 0x3e8f18u: goto label_3e8f18;
        case 0x3e8f1cu: goto label_3e8f1c;
        case 0x3e8f20u: goto label_3e8f20;
        case 0x3e8f24u: goto label_3e8f24;
        case 0x3e8f28u: goto label_3e8f28;
        case 0x3e8f2cu: goto label_3e8f2c;
        case 0x3e8f30u: goto label_3e8f30;
        case 0x3e8f34u: goto label_3e8f34;
        case 0x3e8f38u: goto label_3e8f38;
        case 0x3e8f3cu: goto label_3e8f3c;
        case 0x3e8f40u: goto label_3e8f40;
        case 0x3e8f44u: goto label_3e8f44;
        case 0x3e8f48u: goto label_3e8f48;
        case 0x3e8f4cu: goto label_3e8f4c;
        case 0x3e8f50u: goto label_3e8f50;
        case 0x3e8f54u: goto label_3e8f54;
        case 0x3e8f58u: goto label_3e8f58;
        case 0x3e8f5cu: goto label_3e8f5c;
        case 0x3e8f60u: goto label_3e8f60;
        case 0x3e8f64u: goto label_3e8f64;
        case 0x3e8f68u: goto label_3e8f68;
        case 0x3e8f6cu: goto label_3e8f6c;
        case 0x3e8f70u: goto label_3e8f70;
        case 0x3e8f74u: goto label_3e8f74;
        case 0x3e8f78u: goto label_3e8f78;
        case 0x3e8f7cu: goto label_3e8f7c;
        case 0x3e8f80u: goto label_3e8f80;
        case 0x3e8f84u: goto label_3e8f84;
        case 0x3e8f88u: goto label_3e8f88;
        case 0x3e8f8cu: goto label_3e8f8c;
        case 0x3e8f90u: goto label_3e8f90;
        case 0x3e8f94u: goto label_3e8f94;
        default: break;
    }

    ctx->pc = 0x3e8eb0u;

label_3e8eb0:
    // 0x3e8eb0: 0x27bdfb80  addiu       $sp, $sp, -0x480
    ctx->pc = 0x3e8eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966144));
label_3e8eb4:
    // 0x3e8eb4: 0x7fb00470  sq          $s0, 0x470($sp)
    ctx->pc = 0x3e8eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 16));
label_3e8eb8:
    // 0x3e8eb8: 0x7fb10460  sq          $s1, 0x460($sp)
    ctx->pc = 0x3e8eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 17));
label_3e8ebc:
    // 0x3e8ebc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e8ebcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e8ec0:
    // 0x3e8ec0: 0x7fb20450  sq          $s2, 0x450($sp)
    ctx->pc = 0x3e8ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 18));
label_3e8ec4:
    // 0x3e8ec4: 0x7fb30440  sq          $s3, 0x440($sp)
    ctx->pc = 0x3e8ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 19));
label_3e8ec8:
    // 0x3e8ec8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3e8ec8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e8ecc:
    // 0x3e8ecc: 0xffbf0430  sd          $ra, 0x430($sp)
    ctx->pc = 0x3e8eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1072), GPR_U64(ctx, 31));
label_3e8ed0:
    // 0x3e8ed0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3e8ed0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3e8ed4:
    // 0x3e8ed4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3e8ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3e8ed8:
    // 0x3e8ed8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e8ed8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e8edc:
    // 0x3e8edc: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e8edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e8ee0:
    // 0x3e8ee0: 0x40f809  jalr        $v0
label_3e8ee4:
    if (ctx->pc == 0x3E8EE4u) {
        ctx->pc = 0x3E8EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8EE0u;
        // 0x3e8ee4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8EE8u;
        goto label_3e8ee8;
    }
    ctx->pc = 0x3E8EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E8EE8u);
        ctx->pc = 0x3E8EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8EE0u;
        // 0x3e8ee4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E8EE0u, 0x3E8EE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E8EE8u;
label_3e8ee8:
    // 0x3e8ee8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3e8ee8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e8eec:
    // 0x3e8eec: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x3e8eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_3e8ef0:
    // 0x3e8ef0: 0x12420005  beq         $s2, $v0, . + 4 + (0x5 << 2)
label_3e8ef4:
    if (ctx->pc == 0x3E8EF4u) {
        ctx->pc = 0x3E8EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8EF0u;
        // 0x3e8ef4: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8EF8u;
        goto label_3e8ef8;
    }
    ctx->pc = 0x3E8EF0u;
    {
        const bool branch_taken_0x3e8ef0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E8EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8EF0u;
        // 0x3e8ef4: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8ef0) {
            ctx->pc = 0x3E8F08u;
            goto label_3e8f08;
        }
    }
    ctx->pc = 0x3E8EF8u;
label_3e8ef8:
    // 0x3e8ef8: 0x12420016  beq         $s2, $v0, . + 4 + (0x16 << 2)
label_3e8efc:
    if (ctx->pc == 0x3E8EFCu) {
        ctx->pc = 0x3E8EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8EF8u;
        // 0x3e8efc: 0x7bb00470  lq          $s0, 0x470($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8F00u;
        goto label_3e8f00;
    }
    ctx->pc = 0x3E8EF8u;
    {
        const bool branch_taken_0x3e8ef8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E8EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8EF8u;
        // 0x3e8efc: 0x7bb00470  lq          $s0, 0x470($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8ef8) {
            ctx->pc = 0x3E8F54u;
            goto label_3e8f54;
        }
    }
    ctx->pc = 0x3E8F00u;
label_3e8f00:
    // 0x3e8f00: 0x10000020  b           . + 4 + (0x20 << 2)
label_3e8f04:
    if (ctx->pc == 0x3E8F04u) {
        ctx->pc = 0x3E8F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8F00u;
        // 0x3e8f04: 0x7bb10460  lq          $s1, 0x460($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8F08u;
        goto label_3e8f08;
    }
    ctx->pc = 0x3E8F00u;
    {
        const bool branch_taken_0x3e8f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8F00u;
        // 0x3e8f04: 0x7bb10460  lq          $s1, 0x460($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8f00) {
            ctx->pc = 0x3E8F84u;
            goto label_3e8f84;
        }
    }
    ctx->pc = 0x3E8F08u;
label_3e8f08:
    // 0x3e8f08: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e8f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e8f0c:
    // 0x3e8f0c: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
label_3e8f10:
    if (ctx->pc == 0x3E8F10u) {
        ctx->pc = 0x3E8F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8F0Cu;
        // 0x3e8f10: 0x7bb00470  lq          $s0, 0x470($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8F14u;
        goto label_3e8f14;
    }
    ctx->pc = 0x3E8F0Cu;
    {
        const bool branch_taken_0x3e8f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e8f0c) {
            ctx->pc = 0x3E8F10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E8F0Cu;
            // 0x3e8f10: 0x7bb00470  lq          $s0, 0x470($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E8F80u;
            goto label_3e8f80;
        }
    }
    ctx->pc = 0x3E8F14u;
label_3e8f14:
    // 0x3e8f14: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x3e8f14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_3e8f18:
    // 0x3e8f18: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3e8f18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3e8f1c:
    // 0x3e8f1c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3e8f1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3e8f20:
    // 0x3e8f20: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3e8f20u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3e8f24:
    // 0x3e8f24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3e8f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3e8f28:
    // 0x3e8f28: 0x27a50410  addiu       $a1, $sp, 0x410
    ctx->pc = 0x3e8f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3e8f2c:
    // 0x3e8f2c: 0x261058b8  addiu       $s0, $s0, 0x58B8
    ctx->pc = 0x3e8f2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22712));
label_3e8f30:
    // 0x3e8f30: 0x7fa20410  sq          $v0, 0x410($sp)
    ctx->pc = 0x3e8f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
label_3e8f34:
    // 0x3e8f34: 0xafa30420  sw          $v1, 0x420($sp)
    ctx->pc = 0x3e8f34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1056), GPR_U32(ctx, 3));
label_3e8f38:
    // 0x3e8f38: 0xc0e9f84  jal         func_3A7E10
label_3e8f3c:
    if (ctx->pc == 0x3E8F3Cu) {
        ctx->pc = 0x3E8F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8F38u;
        // 0x3e8f3c: 0x27a60420  addiu       $a2, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8F40u;
        goto label_3e8f40;
    }
    ctx->pc = 0x3E8F38u;
    SET_GPR_U32(ctx, 31, 0x3E8F40u);
    ctx->pc = 0x3E8F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8F38u;
    // 0x3e8f3c: 0x27a60420  addiu       $a2, $sp, 0x420 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E10u, 0x3E8F38u, 0x3E8F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8F40u;
label_3e8f40:
    // 0x3e8f40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e8f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e8f44:
    // 0x3e8f44: 0xc0f15bc  jal         func_3C56F0
label_3e8f48:
    if (ctx->pc == 0x3E8F48u) {
        ctx->pc = 0x3E8F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8F44u;
        // 0x3e8f48: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8F4Cu;
        goto label_3e8f4c;
    }
    ctx->pc = 0x3E8F44u;
    SET_GPR_U32(ctx, 31, 0x3E8F4Cu);
    ctx->pc = 0x3E8F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8F44u;
    // 0x3e8f48: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3E8F44u, 0x3E8F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8F4Cu;
label_3e8f4c:
    // 0x3e8f4c: 0x1000000b  b           . + 4 + (0xB << 2)
label_3e8f50:
    if (ctx->pc == 0x3E8F50u) {
        ctx->pc = 0x3E8F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8F4Cu;
        // 0x3e8f50: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8F54u;
        goto label_3e8f54;
    }
    ctx->pc = 0x3E8F4Cu;
    {
        const bool branch_taken_0x3e8f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8F4Cu;
        // 0x3e8f50: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8f4c) {
            ctx->pc = 0x3E8F7Cu;
            goto label_3e8f7c;
        }
    }
    ctx->pc = 0x3E8F54u;
label_3e8f54:
    // 0x3e8f54: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x3e8f54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e8f58:
    // 0x3e8f58: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
label_3e8f5c:
    if (ctx->pc == 0x3E8F5Cu) {
        ctx->pc = 0x3E8F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8F58u;
        // 0x3e8f5c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8F60u;
        goto label_3e8f60;
    }
    ctx->pc = 0x3E8F58u;
    {
        const bool branch_taken_0x3e8f58 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8F58u;
        // 0x3e8f5c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8f58) {
            ctx->pc = 0x3E8F78u;
            goto label_3e8f78;
        }
    }
    ctx->pc = 0x3E8F60u;
label_3e8f60:
    // 0x3e8f60: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3e8f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3e8f64:
    // 0x3e8f64: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x3e8f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_3e8f68:
    // 0x3e8f68: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3e8f68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3e8f6c:
    // 0x3e8f6c: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3e8f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3e8f70:
    // 0x3e8f70: 0x60f809  jalr        $v1
label_3e8f74:
    if (ctx->pc == 0x3E8F74u) {
        ctx->pc = 0x3E8F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8F70u;
        // 0x3e8f74: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8F78u;
        goto label_3e8f78;
    }
    ctx->pc = 0x3E8F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3E8F78u);
        ctx->pc = 0x3E8F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8F70u;
        // 0x3e8f74: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E8F70u, 0x3E8F78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E8F78u;
label_3e8f78:
    // 0x3e8f78: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x3e8f78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_3e8f7c:
    // 0x3e8f7c: 0x7bb00470  lq          $s0, 0x470($sp)
    ctx->pc = 0x3e8f7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3e8f80:
    // 0x3e8f80: 0x7bb10460  lq          $s1, 0x460($sp)
    ctx->pc = 0x3e8f80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3e8f84:
    // 0x3e8f84: 0x7bb20450  lq          $s2, 0x450($sp)
    ctx->pc = 0x3e8f84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3e8f88:
    // 0x3e8f88: 0x7bb30440  lq          $s3, 0x440($sp)
    ctx->pc = 0x3e8f88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3e8f8c:
    // 0x3e8f8c: 0xdfbf0430  ld          $ra, 0x430($sp)
    ctx->pc = 0x3e8f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1072)));
label_3e8f90:
    // 0x3e8f90: 0x3e00008  jr          $ra
label_3e8f94:
    if (ctx->pc == 0x3E8F94u) {
        ctx->pc = 0x3E8F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8F90u;
        // 0x3e8f94: 0x27bd0480  addiu       $sp, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8F98u;
        goto label_fallthrough_0x3e8f90;
    }
    ctx->pc = 0x3E8F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E8F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8F90u;
        // 0x3e8f94: 0x27bd0480  addiu       $sp, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E8F90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e8f90:
    ctx->pc = 0x3E8F98u;
}
