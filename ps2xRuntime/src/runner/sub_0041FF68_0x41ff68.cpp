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

// Function: sub_0041FF68
// Address: 0x41ff68 - 0x420040
void sub_0041FF68_0x41ff68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041FF68_0x41ff68");
#endif

    switch (ctx->pc) {
        case 0x41ff68u: goto label_41ff68;
        case 0x41ff6cu: goto label_41ff6c;
        case 0x41ff70u: goto label_41ff70;
        case 0x41ff74u: goto label_41ff74;
        case 0x41ff78u: goto label_41ff78;
        case 0x41ff7cu: goto label_41ff7c;
        case 0x41ff80u: goto label_41ff80;
        case 0x41ff84u: goto label_41ff84;
        case 0x41ff88u: goto label_41ff88;
        case 0x41ff8cu: goto label_41ff8c;
        case 0x41ff90u: goto label_41ff90;
        case 0x41ff94u: goto label_41ff94;
        case 0x41ff98u: goto label_41ff98;
        case 0x41ff9cu: goto label_41ff9c;
        case 0x41ffa0u: goto label_41ffa0;
        case 0x41ffa4u: goto label_41ffa4;
        case 0x41ffa8u: goto label_41ffa8;
        case 0x41ffacu: goto label_41ffac;
        case 0x41ffb0u: goto label_41ffb0;
        case 0x41ffb4u: goto label_41ffb4;
        case 0x41ffb8u: goto label_41ffb8;
        case 0x41ffbcu: goto label_41ffbc;
        case 0x41ffc0u: goto label_41ffc0;
        case 0x41ffc4u: goto label_41ffc4;
        case 0x41ffc8u: goto label_41ffc8;
        case 0x41ffccu: goto label_41ffcc;
        case 0x41ffd0u: goto label_41ffd0;
        case 0x41ffd4u: goto label_41ffd4;
        case 0x41ffd8u: goto label_41ffd8;
        case 0x41ffdcu: goto label_41ffdc;
        case 0x41ffe0u: goto label_41ffe0;
        case 0x41ffe4u: goto label_41ffe4;
        case 0x41ffe8u: goto label_41ffe8;
        case 0x41ffecu: goto label_41ffec;
        case 0x41fff0u: goto label_41fff0;
        case 0x41fff4u: goto label_41fff4;
        case 0x41fff8u: goto label_41fff8;
        case 0x41fffcu: goto label_41fffc;
        case 0x420000u: goto label_420000;
        case 0x420004u: goto label_420004;
        case 0x420008u: goto label_420008;
        case 0x42000cu: goto label_42000c;
        case 0x420010u: goto label_420010;
        case 0x420014u: goto label_420014;
        case 0x420018u: goto label_420018;
        case 0x42001cu: goto label_42001c;
        case 0x420020u: goto label_420020;
        case 0x420024u: goto label_420024;
        case 0x420028u: goto label_420028;
        case 0x42002cu: goto label_42002c;
        case 0x420030u: goto label_420030;
        case 0x420034u: goto label_420034;
        case 0x420038u: goto label_420038;
        case 0x42003cu: goto label_42003c;
        default: break;
    }

    ctx->pc = 0x41ff68u;

label_41ff68:
    // 0x41ff68: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x41ff68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_41ff6c:
    // 0x41ff6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x41ff6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_41ff70:
    // 0x41ff70: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x41ff70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_41ff74:
    // 0x41ff74: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x41ff74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41ff78:
    // 0x41ff78: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x41ff78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_41ff7c:
    // 0x41ff7c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x41ff7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_41ff80:
    // 0x41ff80: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x41ff80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_41ff84:
    // 0x41ff84: 0x8e430184  lw          $v1, 0x184($s2)
    ctx->pc = 0x41ff84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 388)));
label_41ff88:
    // 0x41ff88: 0x2c62000e  sltiu       $v0, $v1, 0xE
    ctx->pc = 0x41ff88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
label_41ff8c:
    // 0x41ff8c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_41ff90:
    if (ctx->pc == 0x41FF90u) {
        ctx->pc = 0x41FF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FF8Cu;
        // 0x41ff90: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41FF94u;
        goto label_41ff94;
    }
    ctx->pc = 0x41FF8Cu;
    {
        const bool branch_taken_0x41ff8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41FF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FF8Cu;
        // 0x41ff90: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ff8c) {
            ctx->pc = 0x420048u;
            return;
        }
    }
    ctx->pc = 0x41FF94u;
label_41ff94:
    // 0x41ff94: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x41ff94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_41ff98:
    // 0x41ff98: 0x2442b580  addiu       $v0, $v0, -0x4A80
    ctx->pc = 0x41ff98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948224));
label_41ff9c:
    // 0x41ff9c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x41ff9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_41ffa0:
    // 0x41ffa0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x41ffa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_41ffa4:
    // 0x41ffa4: 0x800008  jr          $a0
label_41ffa8:
    if (ctx->pc == 0x41FFA8u) {
        ctx->pc = 0x41FFACu;
        goto label_41ffac;
    }
    ctx->pc = 0x41FFA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x41FFACu: goto label_41ffac;
            case 0x41FFE4u: goto label_41ffe4;
            case 0x420020u: goto label_420020;
            case 0x420030u: goto label_420030;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41FFA4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x41FFACu;
label_41ffac:
    // 0x41ffac: 0xc052e74  jal         func_14B9D0
label_41ffb0:
    if (ctx->pc == 0x41FFB0u) {
        ctx->pc = 0x41FFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FFACu;
        // 0x41ffb0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41FFB4u;
        goto label_41ffb4;
    }
    ctx->pc = 0x41FFACu;
    SET_GPR_U32(ctx, 31, 0x41FFB4u);
    ctx->pc = 0x41FFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41FFACu;
    // 0x41ffb0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B9D0u, 0x41FFACu, 0x41FFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FFB4u;
label_41ffb4:
    // 0x41ffb4: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_41ffb8:
    if (ctx->pc == 0x41FFB8u) {
        ctx->pc = 0x41FFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FFB4u;
        // 0x41ffb8: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41FFBCu;
        goto label_41ffbc;
    }
    ctx->pc = 0x41FFB4u;
    {
        const bool branch_taken_0x41ffb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41FFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FFB4u;
        // 0x41ffb8: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ffb4) {
            ctx->pc = 0x420048u;
            return;
        }
    }
    ctx->pc = 0x41FFBCu;
label_41ffbc:
    // 0x41ffbc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x41ffbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41ffc0:
    // 0x41ffc0: 0x2650012c  addiu       $s0, $s2, 0x12C
    ctx->pc = 0x41ffc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 300));
label_41ffc4:
    // 0x41ffc4: 0xae510184  sw          $s1, 0x184($s2)
    ctx->pc = 0x41ffc4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 388), GPR_U32(ctx, 17));
label_41ffc8:
    // 0x41ffc8: 0xc05287a  jal         func_14A1E8
label_41ffcc:
    if (ctx->pc == 0x41FFCCu) {
        ctx->pc = 0x41FFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FFC8u;
        // 0x41ffcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41FFD0u;
        goto label_41ffd0;
    }
    ctx->pc = 0x41FFC8u;
    SET_GPR_U32(ctx, 31, 0x41FFD0u);
    ctx->pc = 0x41FFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41FFC8u;
    // 0x41ffcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A1E8u, 0x41FFC8u, 0x41FFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FFD0u;
label_41ffd0:
    // 0x41ffd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41ffd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41ffd4:
    // 0x41ffd4: 0xc05286a  jal         func_14A1A8
label_41ffd8:
    if (ctx->pc == 0x41FFD8u) {
        ctx->pc = 0x41FFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FFD4u;
        // 0x41ffd8: 0x26440148  addiu       $a0, $s2, 0x148 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 328));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41FFDCu;
        goto label_41ffdc;
    }
    ctx->pc = 0x41FFD4u;
    SET_GPR_U32(ctx, 31, 0x41FFDCu);
    ctx->pc = 0x41FFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41FFD4u;
    // 0x41ffd8: 0x26440148  addiu       $a0, $s2, 0x148 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A1A8u, 0x41FFD4u, 0x41FFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FFDCu;
label_41ffdc:
    // 0x41ffdc: 0x1000001a  b           . + 4 + (0x1A << 2)
label_41ffe0:
    if (ctx->pc == 0x41FFE0u) {
        ctx->pc = 0x41FFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FFDCu;
        // 0x41ffe0: 0xae51018c  sw          $s1, 0x18C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 396), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41FFE4u;
        goto label_41ffe4;
    }
    ctx->pc = 0x41FFDCu;
    {
        const bool branch_taken_0x41ffdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41FFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FFDCu;
        // 0x41ffe0: 0xae51018c  sw          $s1, 0x18C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 396), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ffdc) {
            ctx->pc = 0x420048u;
            return;
        }
    }
    ctx->pc = 0x41FFE4u;
label_41ffe4:
    // 0x41ffe4: 0xc052e74  jal         func_14B9D0
label_41ffe8:
    if (ctx->pc == 0x41FFE8u) {
        ctx->pc = 0x41FFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FFE4u;
        // 0x41ffe8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41FFECu;
        goto label_41ffec;
    }
    ctx->pc = 0x41FFE4u;
    SET_GPR_U32(ctx, 31, 0x41FFECu);
    ctx->pc = 0x41FFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41FFE4u;
    // 0x41ffe8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B9D0u, 0x41FFE4u, 0x41FFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FFECu;
label_41ffec:
    // 0x41ffec: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_41fff0:
    if (ctx->pc == 0x41FFF0u) {
        ctx->pc = 0x41FFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FFECu;
        // 0x41fff0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41FFF4u;
        goto label_41fff4;
    }
    ctx->pc = 0x41FFECu;
    {
        const bool branch_taken_0x41ffec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41FFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FFECu;
        // 0x41fff0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ffec) {
            ctx->pc = 0x420048u;
            return;
        }
    }
    ctx->pc = 0x41FFF4u;
label_41fff4:
    // 0x41fff4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x41fff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_41fff8:
    // 0x41fff8: 0x4400013  bltz        $v0, . + 4 + (0x13 << 2)
label_41fffc:
    if (ctx->pc == 0x41FFFCu) {
        ctx->pc = 0x41FFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FFF8u;
        // 0x41fffc: 0xae430184  sw          $v1, 0x184($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 388), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420000u;
        goto label_420000;
    }
    ctx->pc = 0x41FFF8u;
    {
        const bool branch_taken_0x41fff8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x41FFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FFF8u;
        // 0x41fffc: 0xae430184  sw          $v1, 0x184($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 388), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fff8) {
            ctx->pc = 0x420048u;
            return;
        }
    }
    ctx->pc = 0x420000u;
label_420000:
    // 0x420000: 0xae43018c  sw          $v1, 0x18C($s2)
    ctx->pc = 0x420000u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 396), GPR_U32(ctx, 3));
label_420004:
    // 0x420004: 0x8e420128  lw          $v0, 0x128($s2)
    ctx->pc = 0x420004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 296)));
label_420008:
    // 0x420008: 0x844400f0  lh          $a0, 0xF0($v0)
    ctx->pc = 0x420008u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 240)));
label_42000c:
    // 0x42000c: 0x8c4300f4  lw          $v1, 0xF4($v0)
    ctx->pc = 0x42000cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
label_420010:
    // 0x420010: 0x60f809  jalr        $v1
label_420014:
    if (ctx->pc == 0x420014u) {
        ctx->pc = 0x420014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420010u;
        // 0x420014: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420018u;
        goto label_420018;
    }
    ctx->pc = 0x420010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x420018u);
        ctx->pc = 0x420014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420010u;
        // 0x420014: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x420010u, 0x420018u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x420018u;
label_420018:
    // 0x420018: 0x1000000c  b           . + 4 + (0xC << 2)
label_42001c:
    if (ctx->pc == 0x42001Cu) {
        ctx->pc = 0x42001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420018u;
        // 0x42001c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420020u;
        goto label_420020;
    }
    ctx->pc = 0x420018u;
    {
        const bool branch_taken_0x420018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420018u;
        // 0x42001c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420018) {
            ctx->pc = 0x42004Cu;
            return;
        }
    }
    ctx->pc = 0x420020u;
label_420020:
    // 0x420020: 0xc108018  jal         func_420060
label_420024:
    if (ctx->pc == 0x420024u) {
        ctx->pc = 0x420024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420020u;
        // 0x420024: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420028u;
        goto label_420028;
    }
    ctx->pc = 0x420020u;
    SET_GPR_U32(ctx, 31, 0x420028u);
    ctx->pc = 0x420024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x420020u;
    // 0x420024: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420060u, 0x420020u, 0x420028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x420028u;
label_420028:
    // 0x420028: 0x10000008  b           . + 4 + (0x8 << 2)
label_42002c:
    if (ctx->pc == 0x42002Cu) {
        ctx->pc = 0x42002Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420028u;
        // 0x42002c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420030u;
        goto label_420030;
    }
    ctx->pc = 0x420028u;
    {
        const bool branch_taken_0x420028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42002Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420028u;
        // 0x42002c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420028) {
            ctx->pc = 0x42004Cu;
            return;
        }
    }
    ctx->pc = 0x420030u;
label_420030:
    // 0x420030: 0xc10815c  jal         func_420570
label_420034:
    if (ctx->pc == 0x420034u) {
        ctx->pc = 0x420034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420030u;
        // 0x420034: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420038u;
        goto label_420038;
    }
    ctx->pc = 0x420030u;
    SET_GPR_U32(ctx, 31, 0x420038u);
    ctx->pc = 0x420034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x420030u;
    // 0x420034: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420570u, 0x420030u, 0x420038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x420038u;
label_420038:
    // 0x420038: 0x10000004  b           . + 4 + (0x4 << 2)
label_42003c:
    if (ctx->pc == 0x42003Cu) {
        ctx->pc = 0x42003Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420038u;
        // 0x42003c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420040u;
        goto label_fallthrough_0x420038;
    }
    ctx->pc = 0x420038u;
    {
        const bool branch_taken_0x420038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42003Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420038u;
        // 0x42003c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420038) {
            ctx->pc = 0x42004Cu;
            return;
        }
    }
label_fallthrough_0x420038:
    ctx->pc = 0x420040u;
}
