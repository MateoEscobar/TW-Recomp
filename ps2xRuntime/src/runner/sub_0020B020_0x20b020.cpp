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

// Function: sub_0020B020
// Address: 0x20b020 - 0x20b128
void sub_0020B020_0x20b020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B020_0x20b020");
#endif

    switch (ctx->pc) {
        case 0x20b020u: goto label_20b020;
        case 0x20b024u: goto label_20b024;
        case 0x20b028u: goto label_20b028;
        case 0x20b02cu: goto label_20b02c;
        case 0x20b030u: goto label_20b030;
        case 0x20b034u: goto label_20b034;
        case 0x20b038u: goto label_20b038;
        case 0x20b03cu: goto label_20b03c;
        case 0x20b040u: goto label_20b040;
        case 0x20b044u: goto label_20b044;
        case 0x20b048u: goto label_20b048;
        case 0x20b04cu: goto label_20b04c;
        case 0x20b050u: goto label_20b050;
        case 0x20b054u: goto label_20b054;
        case 0x20b058u: goto label_20b058;
        case 0x20b05cu: goto label_20b05c;
        case 0x20b060u: goto label_20b060;
        case 0x20b064u: goto label_20b064;
        case 0x20b068u: goto label_20b068;
        case 0x20b06cu: goto label_20b06c;
        case 0x20b070u: goto label_20b070;
        case 0x20b074u: goto label_20b074;
        case 0x20b078u: goto label_20b078;
        case 0x20b07cu: goto label_20b07c;
        case 0x20b080u: goto label_20b080;
        case 0x20b084u: goto label_20b084;
        case 0x20b088u: goto label_20b088;
        case 0x20b08cu: goto label_20b08c;
        case 0x20b090u: goto label_20b090;
        case 0x20b094u: goto label_20b094;
        case 0x20b098u: goto label_20b098;
        case 0x20b09cu: goto label_20b09c;
        case 0x20b0a0u: goto label_20b0a0;
        case 0x20b0a4u: goto label_20b0a4;
        case 0x20b0a8u: goto label_20b0a8;
        case 0x20b0acu: goto label_20b0ac;
        case 0x20b0b0u: goto label_20b0b0;
        case 0x20b0b4u: goto label_20b0b4;
        case 0x20b0b8u: goto label_20b0b8;
        case 0x20b0bcu: goto label_20b0bc;
        case 0x20b0c0u: goto label_20b0c0;
        case 0x20b0c4u: goto label_20b0c4;
        case 0x20b0c8u: goto label_20b0c8;
        case 0x20b0ccu: goto label_20b0cc;
        case 0x20b0d0u: goto label_20b0d0;
        case 0x20b0d4u: goto label_20b0d4;
        case 0x20b0d8u: goto label_20b0d8;
        case 0x20b0dcu: goto label_20b0dc;
        case 0x20b0e0u: goto label_20b0e0;
        case 0x20b0e4u: goto label_20b0e4;
        case 0x20b0e8u: goto label_20b0e8;
        case 0x20b0ecu: goto label_20b0ec;
        case 0x20b0f0u: goto label_20b0f0;
        case 0x20b0f4u: goto label_20b0f4;
        case 0x20b0f8u: goto label_20b0f8;
        case 0x20b0fcu: goto label_20b0fc;
        case 0x20b100u: goto label_20b100;
        case 0x20b104u: goto label_20b104;
        case 0x20b108u: goto label_20b108;
        case 0x20b10cu: goto label_20b10c;
        case 0x20b110u: goto label_20b110;
        case 0x20b114u: goto label_20b114;
        case 0x20b118u: goto label_20b118;
        case 0x20b11cu: goto label_20b11c;
        case 0x20b120u: goto label_20b120;
        case 0x20b124u: goto label_20b124;
        default: break;
    }

    ctx->pc = 0x20b020u;

label_20b020:
    // 0x20b020: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20b020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_20b024:
    // 0x20b024: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x20b024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_20b028:
    // 0x20b028: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x20b028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_20b02c:
    // 0x20b02c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20b02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_20b030:
    // 0x20b030: 0xc06a38c  jal         func_1A8E30
label_20b034:
    if (ctx->pc == 0x20B034u) {
        ctx->pc = 0x20B034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B030u;
        // 0x20b034: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B038u;
        goto label_20b038;
    }
    ctx->pc = 0x20B030u;
    SET_GPR_U32(ctx, 31, 0x20B038u);
    ctx->pc = 0x20B034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B030u;
    // 0x20b034: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x20B030u, 0x20B038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B038u;
label_20b038:
    // 0x20b038: 0x26110078  addiu       $s1, $s0, 0x78
    ctx->pc = 0x20b038u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_20b03c:
    // 0x20b03c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x20b03cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_20b040:
    // 0x20b040: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x20b040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_20b044:
    // 0x20b044: 0x24638778  addiu       $v1, $v1, -0x7888
    ctx->pc = 0x20b044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936440));
label_20b048:
    // 0x20b048: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x20b048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_20b04c:
    // 0x20b04c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x20b04cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_20b050:
    // 0x20b050: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x20b050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_20b054:
    // 0x20b054: 0x24428510  addiu       $v0, $v0, -0x7AF0
    ctx->pc = 0x20b054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935824));
label_20b058:
    // 0x20b058: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x20b058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_20b05c:
    // 0x20b05c: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x20b05cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
label_20b060:
    // 0x20b060: 0x2463cc88  addiu       $v1, $v1, -0x3378
    ctx->pc = 0x20b060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954120));
label_20b064:
    // 0x20b064: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x20b064u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_20b068:
    // 0x20b068: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x20b068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_20b06c:
    // 0x20b06c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x20b06cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_20b070:
    // 0x20b070: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x20b070u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_20b074:
    // 0x20b074: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x20b074u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_20b078:
    // 0x20b078: 0x3c080056  lui         $t0, 0x56
    ctx->pc = 0x20b078u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)86 << 16));
label_20b07c:
    // 0x20b07c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x20b07cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_20b080:
    // 0x20b080: 0x3c0a0056  lui         $t2, 0x56
    ctx->pc = 0x20b080u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)86 << 16));
label_20b084:
    // 0x20b084: 0xae030088  sw          $v1, 0x88($s0)
    ctx->pc = 0x20b084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 3));
label_20b088:
    // 0x20b088: 0x24a59100  addiu       $a1, $a1, -0x6F00
    ctx->pc = 0x20b088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938880));
label_20b08c:
    // 0x20b08c: 0x8c4cb9c0  lw          $t4, -0x4640($v0)
    ctx->pc = 0x20b08cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_20b090:
    // 0x20b090: 0x25089108  addiu       $t0, $t0, -0x6EF8
    ctx->pc = 0x20b090u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294938888));
label_20b094:
    // 0x20b094: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x20b094u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_20b098:
    // 0x20b098: 0x254a9130  addiu       $t2, $t2, -0x6ED0
    ctx->pc = 0x20b098u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294938928));
label_20b09c:
    // 0x20b09c: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x20b09cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_20b0a0:
    // 0x20b0a0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x20b0a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20b0a4:
    // 0x20b0a4: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x20b0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_20b0a8:
    // 0x20b0a8: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x20b0a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_20b0ac:
    // 0x20b0ac: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x20b0acu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20b0b0:
    // 0x20b0b0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x20b0b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_20b0b4:
    // 0x20b0b4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x20b0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_20b0b8:
    // 0x20b0b8: 0x40f809  jalr        $v0
label_20b0bc:
    if (ctx->pc == 0x20B0BCu) {
        ctx->pc = 0x20B0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B0B8u;
        // 0x20b0bc: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B0C0u;
        goto label_20b0c0;
    }
    ctx->pc = 0x20B0B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20B0C0u);
        ctx->pc = 0x20B0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B0B8u;
        // 0x20b0bc: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B0B8u, 0x20B0C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20B0C0u;
label_20b0c0:
    // 0x20b0c0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x20b0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_20b0c4:
    // 0x20b0c4: 0x3c070054  lui         $a3, 0x54
    ctx->pc = 0x20b0c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)84 << 16));
label_20b0c8:
    // 0x20b0c8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x20b0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_20b0cc:
    // 0x20b0cc: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x20b0ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_20b0d0:
    // 0x20b0d0: 0xa220000c  sb          $zero, 0xC($s1)
    ctx->pc = 0x20b0d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 0));
label_20b0d4:
    // 0x20b0d4: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x20b0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
label_20b0d8:
    // 0x20b0d8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x20b0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_20b0dc:
    // 0x20b0dc: 0x24e7e580  addiu       $a3, $a3, -0x1A80
    ctx->pc = 0x20b0dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960512));
label_20b0e0:
    // 0x20b0e0: 0x24c6e5a8  addiu       $a2, $a2, -0x1A58
    ctx->pc = 0x20b0e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960552));
label_20b0e4:
    // 0x20b0e4: 0x24a5e5d8  addiu       $a1, $a1, -0x1A28
    ctx->pc = 0x20b0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960600));
label_20b0e8:
    // 0x20b0e8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x20b0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_20b0ec:
    // 0x20b0ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x20b0ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20b0f0:
    // 0x20b0f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20b0f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20b0f4:
    // 0x20b0f4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x20b0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_20b0f8:
    // 0x20b0f8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x20b0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_20b0fc:
    // 0x20b0fc: 0xac630008  sw          $v1, 0x8($v1)
    ctx->pc = 0x20b0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 3));
label_20b100:
    // 0x20b100: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x20b100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_20b104:
    // 0x20b104: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x20b104u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20b108:
    // 0x20b108: 0xac84000c  sw          $a0, 0xC($a0)
    ctx->pc = 0x20b108u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 4));
label_20b10c:
    // 0x20b10c: 0xae07006c  sw          $a3, 0x6C($s0)
    ctx->pc = 0x20b10cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 7));
label_20b110:
    // 0x20b110: 0xae060088  sw          $a2, 0x88($s0)
    ctx->pc = 0x20b110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 6));
label_20b114:
    // 0x20b114: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x20b114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_20b118:
    // 0x20b118: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x20b118u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20b11c:
    // 0x20b11c: 0x3e00008  jr          $ra
label_20b120:
    if (ctx->pc == 0x20B120u) {
        ctx->pc = 0x20B120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B11Cu;
        // 0x20b120: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B124u;
        goto label_20b124;
    }
    ctx->pc = 0x20B11Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B11Cu;
        // 0x20b120: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B11Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B124u;
label_20b124:
    // 0x20b124: 0x0  nop
    ctx->pc = 0x20b124u;
    // NOP
    ctx->pc = 0x20b128u;
}
