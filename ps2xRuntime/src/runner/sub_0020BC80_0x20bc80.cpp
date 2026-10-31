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

// Function: sub_0020BC80
// Address: 0x20bc80 - 0x20bd88
void sub_0020BC80_0x20bc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020BC80_0x20bc80");
#endif

    switch (ctx->pc) {
        case 0x20bc80u: goto label_20bc80;
        case 0x20bc84u: goto label_20bc84;
        case 0x20bc88u: goto label_20bc88;
        case 0x20bc8cu: goto label_20bc8c;
        case 0x20bc90u: goto label_20bc90;
        case 0x20bc94u: goto label_20bc94;
        case 0x20bc98u: goto label_20bc98;
        case 0x20bc9cu: goto label_20bc9c;
        case 0x20bca0u: goto label_20bca0;
        case 0x20bca4u: goto label_20bca4;
        case 0x20bca8u: goto label_20bca8;
        case 0x20bcacu: goto label_20bcac;
        case 0x20bcb0u: goto label_20bcb0;
        case 0x20bcb4u: goto label_20bcb4;
        case 0x20bcb8u: goto label_20bcb8;
        case 0x20bcbcu: goto label_20bcbc;
        case 0x20bcc0u: goto label_20bcc0;
        case 0x20bcc4u: goto label_20bcc4;
        case 0x20bcc8u: goto label_20bcc8;
        case 0x20bcccu: goto label_20bccc;
        case 0x20bcd0u: goto label_20bcd0;
        case 0x20bcd4u: goto label_20bcd4;
        case 0x20bcd8u: goto label_20bcd8;
        case 0x20bcdcu: goto label_20bcdc;
        case 0x20bce0u: goto label_20bce0;
        case 0x20bce4u: goto label_20bce4;
        case 0x20bce8u: goto label_20bce8;
        case 0x20bcecu: goto label_20bcec;
        case 0x20bcf0u: goto label_20bcf0;
        case 0x20bcf4u: goto label_20bcf4;
        case 0x20bcf8u: goto label_20bcf8;
        case 0x20bcfcu: goto label_20bcfc;
        case 0x20bd00u: goto label_20bd00;
        case 0x20bd04u: goto label_20bd04;
        case 0x20bd08u: goto label_20bd08;
        case 0x20bd0cu: goto label_20bd0c;
        case 0x20bd10u: goto label_20bd10;
        case 0x20bd14u: goto label_20bd14;
        case 0x20bd18u: goto label_20bd18;
        case 0x20bd1cu: goto label_20bd1c;
        case 0x20bd20u: goto label_20bd20;
        case 0x20bd24u: goto label_20bd24;
        case 0x20bd28u: goto label_20bd28;
        case 0x20bd2cu: goto label_20bd2c;
        case 0x20bd30u: goto label_20bd30;
        case 0x20bd34u: goto label_20bd34;
        case 0x20bd38u: goto label_20bd38;
        case 0x20bd3cu: goto label_20bd3c;
        case 0x20bd40u: goto label_20bd40;
        case 0x20bd44u: goto label_20bd44;
        case 0x20bd48u: goto label_20bd48;
        case 0x20bd4cu: goto label_20bd4c;
        case 0x20bd50u: goto label_20bd50;
        case 0x20bd54u: goto label_20bd54;
        case 0x20bd58u: goto label_20bd58;
        case 0x20bd5cu: goto label_20bd5c;
        case 0x20bd60u: goto label_20bd60;
        case 0x20bd64u: goto label_20bd64;
        case 0x20bd68u: goto label_20bd68;
        case 0x20bd6cu: goto label_20bd6c;
        case 0x20bd70u: goto label_20bd70;
        case 0x20bd74u: goto label_20bd74;
        case 0x20bd78u: goto label_20bd78;
        case 0x20bd7cu: goto label_20bd7c;
        case 0x20bd80u: goto label_20bd80;
        case 0x20bd84u: goto label_20bd84;
        default: break;
    }

    ctx->pc = 0x20bc80u;

label_20bc80:
    // 0x20bc80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20bc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_20bc84:
    // 0x20bc84: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x20bc84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_20bc88:
    // 0x20bc88: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x20bc88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_20bc8c:
    // 0x20bc8c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20bc8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_20bc90:
    // 0x20bc90: 0xc06a38c  jal         func_1A8E30
label_20bc94:
    if (ctx->pc == 0x20BC94u) {
        ctx->pc = 0x20BC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC90u;
        // 0x20bc94: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BC98u;
        goto label_20bc98;
    }
    ctx->pc = 0x20BC90u;
    SET_GPR_U32(ctx, 31, 0x20BC98u);
    ctx->pc = 0x20BC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BC90u;
    // 0x20bc94: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x20BC90u, 0x20BC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BC98u;
label_20bc98:
    // 0x20bc98: 0x26110078  addiu       $s1, $s0, 0x78
    ctx->pc = 0x20bc98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_20bc9c:
    // 0x20bc9c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x20bc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_20bca0:
    // 0x20bca0: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x20bca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_20bca4:
    // 0x20bca4: 0x24638778  addiu       $v1, $v1, -0x7888
    ctx->pc = 0x20bca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936440));
label_20bca8:
    // 0x20bca8: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x20bca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_20bcac:
    // 0x20bcac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x20bcacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_20bcb0:
    // 0x20bcb0: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x20bcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_20bcb4:
    // 0x20bcb4: 0x24428510  addiu       $v0, $v0, -0x7AF0
    ctx->pc = 0x20bcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935824));
label_20bcb8:
    // 0x20bcb8: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x20bcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_20bcbc:
    // 0x20bcbc: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x20bcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
label_20bcc0:
    // 0x20bcc0: 0x2463cc88  addiu       $v1, $v1, -0x3378
    ctx->pc = 0x20bcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954120));
label_20bcc4:
    // 0x20bcc4: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x20bcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_20bcc8:
    // 0x20bcc8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x20bcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_20bccc:
    // 0x20bccc: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x20bcccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_20bcd0:
    // 0x20bcd0: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x20bcd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_20bcd4:
    // 0x20bcd4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x20bcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_20bcd8:
    // 0x20bcd8: 0x3c080056  lui         $t0, 0x56
    ctx->pc = 0x20bcd8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)86 << 16));
label_20bcdc:
    // 0x20bcdc: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x20bcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_20bce0:
    // 0x20bce0: 0x3c0a0056  lui         $t2, 0x56
    ctx->pc = 0x20bce0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)86 << 16));
label_20bce4:
    // 0x20bce4: 0xae030088  sw          $v1, 0x88($s0)
    ctx->pc = 0x20bce4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 3));
label_20bce8:
    // 0x20bce8: 0x24a59250  addiu       $a1, $a1, -0x6DB0
    ctx->pc = 0x20bce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939216));
label_20bcec:
    // 0x20bcec: 0x8c4cb9c0  lw          $t4, -0x4640($v0)
    ctx->pc = 0x20bcecu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_20bcf0:
    // 0x20bcf0: 0x25089258  addiu       $t0, $t0, -0x6DA8
    ctx->pc = 0x20bcf0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294939224));
label_20bcf4:
    // 0x20bcf4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x20bcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_20bcf8:
    // 0x20bcf8: 0x254a9280  addiu       $t2, $t2, -0x6D80
    ctx->pc = 0x20bcf8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294939264));
label_20bcfc:
    // 0x20bcfc: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x20bcfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_20bd00:
    // 0x20bd00: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x20bd00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20bd04:
    // 0x20bd04: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x20bd04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_20bd08:
    // 0x20bd08: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x20bd08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_20bd0c:
    // 0x20bd0c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x20bd0cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20bd10:
    // 0x20bd10: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x20bd10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_20bd14:
    // 0x20bd14: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x20bd14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_20bd18:
    // 0x20bd18: 0x40f809  jalr        $v0
label_20bd1c:
    if (ctx->pc == 0x20BD1Cu) {
        ctx->pc = 0x20BD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BD18u;
        // 0x20bd1c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BD20u;
        goto label_20bd20;
    }
    ctx->pc = 0x20BD18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20BD20u);
        ctx->pc = 0x20BD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BD18u;
        // 0x20bd1c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BD18u, 0x20BD20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20BD20u;
label_20bd20:
    // 0x20bd20: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x20bd20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_20bd24:
    // 0x20bd24: 0x3c070054  lui         $a3, 0x54
    ctx->pc = 0x20bd24u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)84 << 16));
label_20bd28:
    // 0x20bd28: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x20bd28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_20bd2c:
    // 0x20bd2c: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x20bd2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_20bd30:
    // 0x20bd30: 0xa220000c  sb          $zero, 0xC($s1)
    ctx->pc = 0x20bd30u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 0));
label_20bd34:
    // 0x20bd34: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x20bd34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
label_20bd38:
    // 0x20bd38: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x20bd38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_20bd3c:
    // 0x20bd3c: 0x24e7e690  addiu       $a3, $a3, -0x1970
    ctx->pc = 0x20bd3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960784));
label_20bd40:
    // 0x20bd40: 0x24c6e6b8  addiu       $a2, $a2, -0x1948
    ctx->pc = 0x20bd40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960824));
label_20bd44:
    // 0x20bd44: 0x24a5e6e8  addiu       $a1, $a1, -0x1918
    ctx->pc = 0x20bd44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960872));
label_20bd48:
    // 0x20bd48: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x20bd48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_20bd4c:
    // 0x20bd4c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x20bd4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20bd50:
    // 0x20bd50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20bd50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20bd54:
    // 0x20bd54: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x20bd54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_20bd58:
    // 0x20bd58: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x20bd58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_20bd5c:
    // 0x20bd5c: 0xac630008  sw          $v1, 0x8($v1)
    ctx->pc = 0x20bd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 3));
label_20bd60:
    // 0x20bd60: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x20bd60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_20bd64:
    // 0x20bd64: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x20bd64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20bd68:
    // 0x20bd68: 0xac84000c  sw          $a0, 0xC($a0)
    ctx->pc = 0x20bd68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 4));
label_20bd6c:
    // 0x20bd6c: 0xae07006c  sw          $a3, 0x6C($s0)
    ctx->pc = 0x20bd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 7));
label_20bd70:
    // 0x20bd70: 0xae060088  sw          $a2, 0x88($s0)
    ctx->pc = 0x20bd70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 6));
label_20bd74:
    // 0x20bd74: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x20bd74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_20bd78:
    // 0x20bd78: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x20bd78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20bd7c:
    // 0x20bd7c: 0x3e00008  jr          $ra
label_20bd80:
    if (ctx->pc == 0x20BD80u) {
        ctx->pc = 0x20BD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BD7Cu;
        // 0x20bd80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BD84u;
        goto label_20bd84;
    }
    ctx->pc = 0x20BD7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20BD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BD7Cu;
        // 0x20bd80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BD7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20BD84u;
label_20bd84:
    // 0x20bd84: 0x0  nop
    ctx->pc = 0x20bd84u;
    // NOP
    ctx->pc = 0x20bd88u;
}
