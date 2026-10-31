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

// Function: sub_0010CD68
// Address: 0x10cd68 - 0x10ced0
void sub_0010CD68_0x10cd68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010CD68_0x10cd68");
#endif

    switch (ctx->pc) {
        case 0x10cdccu: goto label_10cdcc;
        case 0x10cde0u: goto label_10cde0;
        case 0x10ce90u: goto label_10ce90;
        default: break;
    }

    ctx->pc = 0x10cd68u;

    // 0x10cd68: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x10cd68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x10cd6c: 0x240300d0  addiu       $v1, $zero, 0xD0
    ctx->pc = 0x10cd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x10cd70: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x10cd70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x10cd74: 0xa5600  sll         $t2, $t2, 24
    ctx->pc = 0x10cd74u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 24));
    // 0x10cd78: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x10cd78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x10cd7c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x10cd7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cd80: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x10cd80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x10cd84: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x10cd84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x10cd88: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x10cd88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cd8c: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x10cd8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x10cd90: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x10cd90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cd94: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x10cd94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x10cd98: 0xaa603  sra         $s4, $t2, 24
    ctx->pc = 0x10cd98u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 10), 24));
    // 0x10cd9c: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x10cd9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x10cda0: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x10cda0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cda4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10cda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10cda8: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x10cda8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cdac: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x10cdacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x10cdb0: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x10cdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x10cdb4: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x10cdb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x10cdb8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x10cdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x10cdbc: 0x2628821  addu        $s1, $s3, $v0
    ctx->pc = 0x10cdbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x10cdc0: 0xa22000cc  sb          $zero, 0xCC($s1)
    ctx->pc = 0x10cdc0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 204), (uint8_t)GPR_U32(ctx, 0));
    // 0x10cdc4: 0xc10c4de  jal         func_431378
    ctx->pc = 0x10CDC4u;
    SET_GPR_U32(ctx, 31, 0x10CDCCu);
    ctx->pc = 0x10CDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CDC4u;
    // 0x10cdc8: 0x262400ad  addiu       $a0, $s1, 0xAD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 173));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x10CDC4u, 0x10CDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CDCCu;
label_10cdcc:
    // 0x10cdcc: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x10cdccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x10cdd0: 0xa220008f  sb          $zero, 0x8F($s1)
    ctx->pc = 0x10cdd0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 143), (uint8_t)GPR_U32(ctx, 0));
    // 0x10cdd4: 0xa223008d  sb          $v1, 0x8D($s1)
    ctx->pc = 0x10cdd4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 141), (uint8_t)GPR_U32(ctx, 3));
    // 0x10cdd8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x10cdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10cddc: 0x26230098  addiu       $v1, $s1, 0x98
    ctx->pc = 0x10cddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 152));
label_10cde0:
    // 0x10cde0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10cde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10cde4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x10cde4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x10cde8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x10cde8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x10cdec: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x10cdecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x10cdf0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x10cdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x10cdf4: 0x9222008f  lbu         $v0, 0x8F($s1)
    ctx->pc = 0x10cdf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 143)));
    // 0x10cdf8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10cdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10cdfc: 0x481fff8  bgez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x10CDFCu;
    {
        const bool branch_taken_0x10cdfc = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x10CE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CDFCu;
        // 0x10ce00: 0xa222008f  sb          $v0, 0x8F($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 143), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cdfc) {
            ctx->pc = 0x10CDE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10cde0;
        }
    }
    ctx->pc = 0x10CE04u;
    // 0x10ce04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10ce04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ce08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10ce08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10ce0c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x10ce0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x10ce10: 0xa222008e  sb          $v0, 0x8E($s1)
    ctx->pc = 0x10ce10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 142), (uint8_t)GPR_U32(ctx, 2));
    // 0x10ce14: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x10ce14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x10ce18: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x10ce18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x10ce1c: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x10ce1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10ce20: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x10ce20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x10ce24: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x10ce24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x10ce28: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x10ce28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10ce2c: 0xe6210010  swc1        $f1, 0x10($s1)
    ctx->pc = 0x10ce2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x10ce30: 0xe463000c  swc1        $f3, 0xC($v1)
    ctx->pc = 0x10ce30u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x10ce34: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x10ce34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x10ce38: 0xe4620008  swc1        $f2, 0x8($v1)
    ctx->pc = 0x10ce38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x10ce3c: 0xa6350086  sh          $s5, 0x86($s1)
    ctx->pc = 0x10ce3cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 134), (uint16_t)GPR_U32(ctx, 21));
    // 0x10ce40: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10CE40u;
    {
        const bool branch_taken_0x10ce40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10CE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CE40u;
        // 0x10ce44: 0xa6360088  sh          $s6, 0x88($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 136), (uint16_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ce40) {
            ctx->pc = 0x10CE50u;
            goto label_10ce50;
        }
    }
    ctx->pc = 0x10CE48u;
    // 0x10ce48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10CE48u;
    {
        const bool branch_taken_0x10ce48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CE48u;
        // 0x10ce4c: 0xa2200090  sb          $zero, 0x90($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 144), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ce48) {
            ctx->pc = 0x10CE54u;
            goto label_10ce54;
        }
    }
    ctx->pc = 0x10CE50u;
label_10ce50:
    // 0x10ce50: 0xa2340090  sb          $s4, 0x90($s1)
    ctx->pc = 0x10ce50u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 144), (uint8_t)GPR_U32(ctx, 20));
label_10ce54:
    // 0x10ce54: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10ce54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10ce58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10ce58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10ce5c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x10ce5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x10ce60: 0x8c47b734  lw          $a3, -0x48CC($v0)
    ctx->pc = 0x10ce60u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x50B734u));
    // 0x10ce64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10ce64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ce68: 0xae23007c  sw          $v1, 0x7C($s1)
    ctx->pc = 0x10ce68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 3));
    // 0x10ce6c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x10ce6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x10ce70: 0xe6200078  swc1        $f0, 0x78($s1)
    ctx->pc = 0x10ce70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
    // 0x10ce74: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x10ce74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ce78: 0xae200094  sw          $zero, 0x94($s1)
    ctx->pc = 0x10ce78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 0));
    // 0x10ce7c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x10ce7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ce80: 0x2484b8b0  addiu       $a0, $a0, -0x4750
    ctx->pc = 0x10ce80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949040));
    // 0x10ce84: 0x8ce20038  lw          $v0, 0x38($a3)
    ctx->pc = 0x10ce84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x10ce88: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x10CE88u;
    SET_GPR_U32(ctx, 31, 0x10CE90u);
    ctx->pc = 0x10CE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CE88u;
    // 0x10ce8c: 0xae220080  sw          $v0, 0x80($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x10CE88u, 0x10CE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CE90u;
label_10ce90:
    // 0x10ce90: 0xa6220084  sh          $v0, 0x84($s1)
    ctx->pc = 0x10ce90u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 132), (uint16_t)GPR_U32(ctx, 2));
    // 0x10ce94: 0xa220008c  sb          $zero, 0x8C($s1)
    ctx->pc = 0x10ce94u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 140), (uint8_t)GPR_U32(ctx, 0));
    // 0x10ce98: 0xa620008a  sh          $zero, 0x8A($s1)
    ctx->pc = 0x10ce98u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 138), (uint16_t)GPR_U32(ctx, 0));
    // 0x10ce9c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x10ce9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10cea0: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x10cea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x10cea4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x10cea4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10cea8: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x10cea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10ceac: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x10ceacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10ceb0: 0xae630008  sw          $v1, 0x8($s3)
    ctx->pc = 0x10ceb0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
    // 0x10ceb4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x10ceb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10ceb8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x10ceb8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10cebc: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x10cebcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10cec0: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x10cec0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10cec4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10cec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10cec8: 0x3e00008  jr          $ra
    ctx->pc = 0x10CEC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CEC8u;
        // 0x10cecc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CEC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CED0u;
}
