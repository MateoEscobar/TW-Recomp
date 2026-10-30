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

// Function: sub_002A7E98
// Address: 0x2a7e98 - 0x2a7f68
void sub_002A7E98_0x2a7e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7E98_0x2a7e98");
#endif

    switch (ctx->pc) {
        case 0x2a7e98u: goto label_2a7e98;
        case 0x2a7e9cu: goto label_2a7e9c;
        case 0x2a7ea0u: goto label_2a7ea0;
        case 0x2a7ea4u: goto label_2a7ea4;
        case 0x2a7ea8u: goto label_2a7ea8;
        case 0x2a7eacu: goto label_2a7eac;
        case 0x2a7eb0u: goto label_2a7eb0;
        case 0x2a7eb4u: goto label_2a7eb4;
        case 0x2a7eb8u: goto label_2a7eb8;
        case 0x2a7ebcu: goto label_2a7ebc;
        case 0x2a7ec0u: goto label_2a7ec0;
        case 0x2a7ec4u: goto label_2a7ec4;
        case 0x2a7ec8u: goto label_2a7ec8;
        case 0x2a7eccu: goto label_2a7ecc;
        case 0x2a7ed0u: goto label_2a7ed0;
        case 0x2a7ed4u: goto label_2a7ed4;
        case 0x2a7ed8u: goto label_2a7ed8;
        case 0x2a7edcu: goto label_2a7edc;
        case 0x2a7ee0u: goto label_2a7ee0;
        case 0x2a7ee4u: goto label_2a7ee4;
        case 0x2a7ee8u: goto label_2a7ee8;
        case 0x2a7eecu: goto label_2a7eec;
        case 0x2a7ef0u: goto label_2a7ef0;
        case 0x2a7ef4u: goto label_2a7ef4;
        case 0x2a7ef8u: goto label_2a7ef8;
        case 0x2a7efcu: goto label_2a7efc;
        case 0x2a7f00u: goto label_2a7f00;
        case 0x2a7f04u: goto label_2a7f04;
        case 0x2a7f08u: goto label_2a7f08;
        case 0x2a7f0cu: goto label_2a7f0c;
        case 0x2a7f10u: goto label_2a7f10;
        case 0x2a7f14u: goto label_2a7f14;
        case 0x2a7f18u: goto label_2a7f18;
        case 0x2a7f1cu: goto label_2a7f1c;
        case 0x2a7f20u: goto label_2a7f20;
        case 0x2a7f24u: goto label_2a7f24;
        case 0x2a7f28u: goto label_2a7f28;
        case 0x2a7f2cu: goto label_2a7f2c;
        case 0x2a7f30u: goto label_2a7f30;
        case 0x2a7f34u: goto label_2a7f34;
        case 0x2a7f38u: goto label_2a7f38;
        case 0x2a7f3cu: goto label_2a7f3c;
        case 0x2a7f40u: goto label_2a7f40;
        case 0x2a7f44u: goto label_2a7f44;
        case 0x2a7f48u: goto label_2a7f48;
        case 0x2a7f4cu: goto label_2a7f4c;
        case 0x2a7f50u: goto label_2a7f50;
        case 0x2a7f54u: goto label_2a7f54;
        case 0x2a7f58u: goto label_2a7f58;
        case 0x2a7f5cu: goto label_2a7f5c;
        case 0x2a7f60u: goto label_2a7f60;
        case 0x2a7f64u: goto label_2a7f64;
        default: break;
    }

    ctx->pc = 0x2a7e98u;

label_2a7e98:
    // 0x2a7e98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a7e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2a7e9c:
    // 0x2a7e9c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2a7e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2a7ea0:
    // 0x2a7ea0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2a7ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2a7ea4:
    // 0x2a7ea4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a7ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2a7ea8:
    // 0x2a7ea8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a7ea8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a7eac:
    // 0x2a7eac: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2a7eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a7eb0:
    // 0x2a7eb0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2a7eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a7eb4:
    // 0x2a7eb4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a7eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a7eb8:
    // 0x2a7eb8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a7eb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a7ebc:
    // 0x2a7ebc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a7ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a7ec0:
    // 0x2a7ec0: 0x40f809  jalr        $v0
label_2a7ec4:
    if (ctx->pc == 0x2A7EC4u) {
        ctx->pc = 0x2A7EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7EC0u;
        // 0x2a7ec4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7EC8u;
        goto label_2a7ec8;
    }
    ctx->pc = 0x2A7EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A7EC8u);
        ctx->pc = 0x2A7EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7EC0u;
        // 0x2a7ec4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7EC0u, 0x2A7EC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A7EC8u;
label_2a7ec8:
    // 0x2a7ec8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2a7ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2a7ecc:
    // 0x2a7ecc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a7eccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a7ed0:
    // 0x2a7ed0: 0xc1073fa  jal         func_41CFE8
label_2a7ed4:
    if (ctx->pc == 0x2A7ED4u) {
        ctx->pc = 0x2A7ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7ED0u;
        // 0x2a7ed4: 0x8c64489c  lw          $a0, 0x489C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7ED8u;
        goto label_2a7ed8;
    }
    ctx->pc = 0x2A7ED0u;
    SET_GPR_U32(ctx, 31, 0x2A7ED8u);
    ctx->pc = 0x2A7ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7ED0u;
    // 0x2a7ed4: 0x8c64489c  lw          $a0, 0x489C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CFE8u, 0x2A7ED0u, 0x2A7ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7ED8u;
label_2a7ed8:
    // 0x2a7ed8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2a7ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2a7edc:
    // 0x2a7edc: 0x8e250038  lw          $a1, 0x38($s1)
    ctx->pc = 0x2a7edcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_2a7ee0:
    // 0x2a7ee0: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x2a7ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2a7ee4:
    // 0x2a7ee4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a7ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2a7ee8:
    // 0x2a7ee8: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2a7ee8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a7eec:
    // 0x2a7eec: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2a7eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2a7ef0:
    // 0x2a7ef0: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x2a7ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_2a7ef4:
    // 0x2a7ef4: 0x244203e8  addiu       $v0, $v0, 0x3E8
    ctx->pc = 0x2a7ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1000));
label_2a7ef8:
    // 0x2a7ef8: 0xc0e409a  jal         func_390268
label_2a7efc:
    if (ctx->pc == 0x2A7EFCu) {
        ctx->pc = 0x2A7EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7EF8u;
        // 0x2a7efc: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7F00u;
        goto label_2a7f00;
    }
    ctx->pc = 0x2A7EF8u;
    SET_GPR_U32(ctx, 31, 0x2A7F00u);
    ctx->pc = 0x2A7EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7EF8u;
    // 0x2a7efc: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2A7EF8u, 0x2A7F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7F00u;
label_2a7f00:
    // 0x2a7f00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a7f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a7f04:
    // 0x2a7f04: 0xc0a34d6  jal         func_28D358
label_2a7f08:
    if (ctx->pc == 0x2A7F08u) {
        ctx->pc = 0x2A7F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7F04u;
        // 0x2a7f08: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7F0Cu;
        goto label_2a7f0c;
    }
    ctx->pc = 0x2A7F04u;
    SET_GPR_U32(ctx, 31, 0x2A7F0Cu);
    ctx->pc = 0x2A7F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7F04u;
    // 0x2a7f08: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2A7F04u, 0x2A7F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7F0Cu;
label_2a7f0c:
    // 0x2a7f0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a7f0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a7f10:
    // 0x2a7f10: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
label_2a7f14:
    if (ctx->pc == 0x2A7F14u) {
        ctx->pc = 0x2A7F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7F10u;
        // 0x2a7f14: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7F18u;
        goto label_2a7f18;
    }
    ctx->pc = 0x2A7F10u;
    {
        const bool branch_taken_0x2a7f10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7f10) {
            ctx->pc = 0x2A7F14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7F10u;
            // 0x2a7f14: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7F54u;
            goto label_2a7f54;
        }
    }
    ctx->pc = 0x2A7F18u;
label_2a7f18:
    // 0x2a7f18: 0xc0a367c  jal         func_28D9F0
label_2a7f1c:
    if (ctx->pc == 0x2A7F1Cu) {
        ctx->pc = 0x2A7F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7F18u;
        // 0x2a7f1c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7F20u;
        goto label_2a7f20;
    }
    ctx->pc = 0x2A7F18u;
    SET_GPR_U32(ctx, 31, 0x2A7F20u);
    ctx->pc = 0x2A7F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7F18u;
    // 0x2a7f1c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2A7F18u, 0x2A7F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7F20u;
label_2a7f20:
    // 0x2a7f20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a7f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a7f24:
    // 0x2a7f24: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_2a7f28:
    if (ctx->pc == 0x2A7F28u) {
        ctx->pc = 0x2A7F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7F24u;
        // 0x2a7f28: 0x3c060071  lui         $a2, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7F2Cu;
        goto label_2a7f2c;
    }
    ctx->pc = 0x2A7F24u;
    {
        const bool branch_taken_0x2a7f24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7F24u;
        // 0x2a7f28: 0x3c060071  lui         $a2, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7f24) {
            ctx->pc = 0x2A7F50u;
            goto label_2a7f50;
        }
    }
    ctx->pc = 0x2A7F2Cu;
label_2a7f2c:
    // 0x2a7f2c: 0x86020092  lh          $v0, 0x92($s0)
    ctx->pc = 0x2a7f2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_2a7f30:
    // 0x2a7f30: 0x24c64b00  addiu       $a2, $a2, 0x4B00
    ctx->pc = 0x2a7f30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19200));
label_2a7f34:
    // 0x2a7f34: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2a7f34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a7f38:
    // 0x2a7f38: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2a7f38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2a7f3c:
    // 0x2a7f3c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2a7f3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2a7f40:
    // 0x2a7f40: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a7f40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a7f44:
    // 0x2a7f44: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x2a7f44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2a7f48:
    // 0x2a7f48: 0xc0bf800  jal         func_2FE000
label_2a7f4c:
    if (ctx->pc == 0x2A7F4Cu) {
        ctx->pc = 0x2A7F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7F48u;
        // 0x2a7f4c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7F50u;
        goto label_2a7f50;
    }
    ctx->pc = 0x2A7F48u;
    SET_GPR_U32(ctx, 31, 0x2A7F50u);
    ctx->pc = 0x2A7F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7F48u;
    // 0x2a7f4c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2A7F48u, 0x2A7F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7F50u;
label_2a7f50:
    // 0x2a7f50: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2a7f50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2a7f54:
    // 0x2a7f54: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2a7f54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2a7f58:
    // 0x2a7f58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a7f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a7f5c:
    // 0x2a7f5c: 0x3e00008  jr          $ra
label_2a7f60:
    if (ctx->pc == 0x2A7F60u) {
        ctx->pc = 0x2A7F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7F5Cu;
        // 0x2a7f60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7F64u;
        goto label_2a7f64;
    }
    ctx->pc = 0x2A7F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7F5Cu;
        // 0x2a7f60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7F64u;
label_2a7f64:
    // 0x2a7f64: 0x0  nop
    ctx->pc = 0x2a7f64u;
    // NOP
    ctx->pc = 0x2a7f68u;
}
