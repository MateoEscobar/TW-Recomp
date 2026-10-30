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

// Function: sub_001FB060
// Address: 0x1fb060 - 0x1fb168
void sub_001FB060_0x1fb060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB060_0x1fb060");
#endif

    switch (ctx->pc) {
        case 0x1fb060u: goto label_1fb060;
        case 0x1fb064u: goto label_1fb064;
        case 0x1fb068u: goto label_1fb068;
        case 0x1fb06cu: goto label_1fb06c;
        case 0x1fb070u: goto label_1fb070;
        case 0x1fb074u: goto label_1fb074;
        case 0x1fb078u: goto label_1fb078;
        case 0x1fb07cu: goto label_1fb07c;
        case 0x1fb080u: goto label_1fb080;
        case 0x1fb084u: goto label_1fb084;
        case 0x1fb088u: goto label_1fb088;
        case 0x1fb08cu: goto label_1fb08c;
        case 0x1fb090u: goto label_1fb090;
        case 0x1fb094u: goto label_1fb094;
        case 0x1fb098u: goto label_1fb098;
        case 0x1fb09cu: goto label_1fb09c;
        case 0x1fb0a0u: goto label_1fb0a0;
        case 0x1fb0a4u: goto label_1fb0a4;
        case 0x1fb0a8u: goto label_1fb0a8;
        case 0x1fb0acu: goto label_1fb0ac;
        case 0x1fb0b0u: goto label_1fb0b0;
        case 0x1fb0b4u: goto label_1fb0b4;
        case 0x1fb0b8u: goto label_1fb0b8;
        case 0x1fb0bcu: goto label_1fb0bc;
        case 0x1fb0c0u: goto label_1fb0c0;
        case 0x1fb0c4u: goto label_1fb0c4;
        case 0x1fb0c8u: goto label_1fb0c8;
        case 0x1fb0ccu: goto label_1fb0cc;
        case 0x1fb0d0u: goto label_1fb0d0;
        case 0x1fb0d4u: goto label_1fb0d4;
        case 0x1fb0d8u: goto label_1fb0d8;
        case 0x1fb0dcu: goto label_1fb0dc;
        case 0x1fb0e0u: goto label_1fb0e0;
        case 0x1fb0e4u: goto label_1fb0e4;
        case 0x1fb0e8u: goto label_1fb0e8;
        case 0x1fb0ecu: goto label_1fb0ec;
        case 0x1fb0f0u: goto label_1fb0f0;
        case 0x1fb0f4u: goto label_1fb0f4;
        case 0x1fb0f8u: goto label_1fb0f8;
        case 0x1fb0fcu: goto label_1fb0fc;
        case 0x1fb100u: goto label_1fb100;
        case 0x1fb104u: goto label_1fb104;
        case 0x1fb108u: goto label_1fb108;
        case 0x1fb10cu: goto label_1fb10c;
        case 0x1fb110u: goto label_1fb110;
        case 0x1fb114u: goto label_1fb114;
        case 0x1fb118u: goto label_1fb118;
        case 0x1fb11cu: goto label_1fb11c;
        case 0x1fb120u: goto label_1fb120;
        case 0x1fb124u: goto label_1fb124;
        case 0x1fb128u: goto label_1fb128;
        case 0x1fb12cu: goto label_1fb12c;
        case 0x1fb130u: goto label_1fb130;
        case 0x1fb134u: goto label_1fb134;
        case 0x1fb138u: goto label_1fb138;
        case 0x1fb13cu: goto label_1fb13c;
        case 0x1fb140u: goto label_1fb140;
        case 0x1fb144u: goto label_1fb144;
        case 0x1fb148u: goto label_1fb148;
        case 0x1fb14cu: goto label_1fb14c;
        case 0x1fb150u: goto label_1fb150;
        case 0x1fb154u: goto label_1fb154;
        case 0x1fb158u: goto label_1fb158;
        case 0x1fb15cu: goto label_1fb15c;
        case 0x1fb160u: goto label_1fb160;
        case 0x1fb164u: goto label_1fb164;
        default: break;
    }

    ctx->pc = 0x1fb060u;

label_1fb060:
    // 0x1fb060: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fb060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1fb064:
    // 0x1fb064: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1fb064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1fb068:
    // 0x1fb068: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1fb068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1fb06c:
    // 0x1fb06c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fb06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1fb070:
    // 0x1fb070: 0xc06a38c  jal         func_1A8E30
label_1fb074:
    if (ctx->pc == 0x1FB074u) {
        ctx->pc = 0x1FB074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB070u;
        // 0x1fb074: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB078u;
        goto label_1fb078;
    }
    ctx->pc = 0x1FB070u;
    SET_GPR_U32(ctx, 31, 0x1FB078u);
    ctx->pc = 0x1FB074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB070u;
    // 0x1fb074: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x1FB070u, 0x1FB078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB078u;
label_1fb078:
    // 0x1fb078: 0x26110078  addiu       $s1, $s0, 0x78
    ctx->pc = 0x1fb078u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_1fb07c:
    // 0x1fb07c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1fb07cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1fb080:
    // 0x1fb080: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1fb080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1fb084:
    // 0x1fb084: 0x24638778  addiu       $v1, $v1, -0x7888
    ctx->pc = 0x1fb084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936440));
label_1fb088:
    // 0x1fb088: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1fb088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_1fb08c:
    // 0x1fb08c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1fb08cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1fb090:
    // 0x1fb090: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1fb090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_1fb094:
    // 0x1fb094: 0x24428510  addiu       $v0, $v0, -0x7AF0
    ctx->pc = 0x1fb094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935824));
label_1fb098:
    // 0x1fb098: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1fb098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1fb09c:
    // 0x1fb09c: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x1fb09cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
label_1fb0a0:
    // 0x1fb0a0: 0x2463cc88  addiu       $v1, $v1, -0x3378
    ctx->pc = 0x1fb0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954120));
label_1fb0a4:
    // 0x1fb0a4: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1fb0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_1fb0a8:
    // 0x1fb0a8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1fb0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1fb0ac:
    // 0x1fb0ac: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1fb0acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_1fb0b0:
    // 0x1fb0b0: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1fb0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1fb0b4:
    // 0x1fb0b4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1fb0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_1fb0b8:
    // 0x1fb0b8: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1fb0b8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1fb0bc:
    // 0x1fb0bc: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1fb0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_1fb0c0:
    // 0x1fb0c0: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x1fb0c0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_1fb0c4:
    // 0x1fb0c4: 0xae030088  sw          $v1, 0x88($s0)
    ctx->pc = 0x1fb0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 3));
label_1fb0c8:
    // 0x1fb0c8: 0x24a57c98  addiu       $a1, $a1, 0x7C98
    ctx->pc = 0x1fb0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31896));
label_1fb0cc:
    // 0x1fb0cc: 0x8c4cb9c0  lw          $t4, -0x4640($v0)
    ctx->pc = 0x1fb0ccu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_1fb0d0:
    // 0x1fb0d0: 0x25087ca0  addiu       $t0, $t0, 0x7CA0
    ctx->pc = 0x1fb0d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 31904));
label_1fb0d4:
    // 0x1fb0d4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1fb0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_1fb0d8:
    // 0x1fb0d8: 0x254a7cc8  addiu       $t2, $t2, 0x7CC8
    ctx->pc = 0x1fb0d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 31944));
label_1fb0dc:
    // 0x1fb0dc: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x1fb0dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1fb0e0:
    // 0x1fb0e0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1fb0e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fb0e4:
    // 0x1fb0e4: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1fb0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1fb0e8:
    // 0x1fb0e8: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x1fb0e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_1fb0ec:
    // 0x1fb0ec: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1fb0ecu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fb0f0:
    // 0x1fb0f0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1fb0f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1fb0f4:
    // 0x1fb0f4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1fb0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1fb0f8:
    // 0x1fb0f8: 0x40f809  jalr        $v0
label_1fb0fc:
    if (ctx->pc == 0x1FB0FCu) {
        ctx->pc = 0x1FB0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB0F8u;
        // 0x1fb0fc: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB100u;
        goto label_1fb100;
    }
    ctx->pc = 0x1FB0F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FB100u);
        ctx->pc = 0x1FB0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB0F8u;
        // 0x1fb0fc: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB0F8u, 0x1FB100u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FB100u;
label_1fb100:
    // 0x1fb100: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1fb100u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1fb104:
    // 0x1fb104: 0x3c070054  lui         $a3, 0x54
    ctx->pc = 0x1fb104u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)84 << 16));
label_1fb108:
    // 0x1fb108: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1fb108u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_1fb10c:
    // 0x1fb10c: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x1fb10cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_1fb110:
    // 0x1fb110: 0xa220000c  sb          $zero, 0xC($s1)
    ctx->pc = 0x1fb110u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 0));
label_1fb114:
    // 0x1fb114: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x1fb114u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
label_1fb118:
    // 0x1fb118: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1fb118u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1fb11c:
    // 0x1fb11c: 0x24e7d4d8  addiu       $a3, $a3, -0x2B28
    ctx->pc = 0x1fb11cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956248));
label_1fb120:
    // 0x1fb120: 0x24c6d500  addiu       $a2, $a2, -0x2B00
    ctx->pc = 0x1fb120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956288));
label_1fb124:
    // 0x1fb124: 0x24a5d530  addiu       $a1, $a1, -0x2AD0
    ctx->pc = 0x1fb124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956336));
label_1fb128:
    // 0x1fb128: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1fb128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1fb12c:
    // 0x1fb12c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1fb12cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fb130:
    // 0x1fb130: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fb130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fb134:
    // 0x1fb134: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1fb134u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_1fb138:
    // 0x1fb138: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1fb138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1fb13c:
    // 0x1fb13c: 0xac630008  sw          $v1, 0x8($v1)
    ctx->pc = 0x1fb13cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 3));
label_1fb140:
    // 0x1fb140: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1fb140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1fb144:
    // 0x1fb144: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1fb144u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fb148:
    // 0x1fb148: 0xac84000c  sw          $a0, 0xC($a0)
    ctx->pc = 0x1fb148u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 4));
label_1fb14c:
    // 0x1fb14c: 0xae07006c  sw          $a3, 0x6C($s0)
    ctx->pc = 0x1fb14cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 7));
label_1fb150:
    // 0x1fb150: 0xae060088  sw          $a2, 0x88($s0)
    ctx->pc = 0x1fb150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 6));
label_1fb154:
    // 0x1fb154: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x1fb154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_1fb158:
    // 0x1fb158: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1fb158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fb15c:
    // 0x1fb15c: 0x3e00008  jr          $ra
label_1fb160:
    if (ctx->pc == 0x1FB160u) {
        ctx->pc = 0x1FB160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB15Cu;
        // 0x1fb160: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB164u;
        goto label_1fb164;
    }
    ctx->pc = 0x1FB15Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB15Cu;
        // 0x1fb160: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB15Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB164u;
label_1fb164:
    // 0x1fb164: 0x0  nop
    ctx->pc = 0x1fb164u;
    // NOP
    ctx->pc = 0x1fb168u;
}
