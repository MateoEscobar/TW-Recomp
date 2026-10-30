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

// Function: sub_004CDCA8
// Address: 0x4cdca8 - 0x4cded8
void sub_004CDCA8_0x4cdca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CDCA8_0x4cdca8");
#endif

    switch (ctx->pc) {
        case 0x4cdd28u: goto label_4cdd28;
        case 0x4cdd60u: goto label_4cdd60;
        case 0x4cddd8u: goto label_4cddd8;
        case 0x4cde20u: goto label_4cde20;
        default: break;
    }

    ctx->pc = 0x4cdca8u;

    // 0x4cdca8: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x4cdca8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x4cdcac: 0x2cc3000f  sltiu       $v1, $a2, 0xF
    ctx->pc = 0x4cdcacu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x4cdcb0: 0x51200  sll         $v0, $a1, 8
    ctx->pc = 0x4cdcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x4cdcb4: 0xa24025  or          $t0, $a1, $v0
    ctx->pc = 0x4cdcb4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x4cdcb8: 0x81438  dsll        $v0, $t0, 16
    ctx->pc = 0x4cdcb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << 16);
    // 0x4cdcbc: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x4CDCBCu;
    {
        const bool branch_taken_0x4cdcbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CDCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CDCBCu;
        // 0x4cdcc0: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cdcbc) {
            ctx->pc = 0x4CDD30u;
            goto label_4cdd30;
        }
    }
    ctx->pc = 0x4CDCC4u;
    // 0x4cdcc4: 0x30c20004  andi        $v0, $a2, 0x4
    ctx->pc = 0x4cdcc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
    // 0x4cdcc8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4CDCC8u;
    {
        const bool branch_taken_0x4cdcc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CDCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CDCC8u;
        // 0x4cdccc: 0x30c20008  andi        $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cdcc8) {
            ctx->pc = 0x4CDCE4u;
            goto label_4cdce4;
        }
    }
    ctx->pc = 0x4CDCD0u;
    // 0x4cdcd0: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x4cdcd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x4cdcd4: 0xa8880003  swl         $t0, 0x3($a0)
    ctx->pc = 0x4cdcd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x4cdcd8: 0xb8880000  swr         $t0, 0x0($a0)
    ctx->pc = 0x4cdcd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x4cdcdc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x4cdcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x4cdce0: 0x30c20008  andi        $v0, $a2, 0x8
    ctx->pc = 0x4cdce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
label_4cdce4:
    // 0x4cdce4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4CDCE4u;
    {
        const bool branch_taken_0x4cdce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CDCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CDCE4u;
        // 0x4cdce8: 0x8103c  dsll32      $v0, $t0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cdce4) {
            ctx->pc = 0x4CDD00u;
            goto label_4cdd00;
        }
    }
    ctx->pc = 0x4CDCECu;
    // 0x4cdcec: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x4cdcecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x4cdcf0: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x4cdcf0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x4cdcf4: 0xb0880007  sdl         $t0, 0x7($a0)
    ctx->pc = 0x4cdcf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4cdcf8: 0xb4880000  sdr         $t0, 0x0($a0)
    ctx->pc = 0x4cdcf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4cdcfc: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x4cdcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_4cdd00:
    // 0x4cdd00: 0x10c00073  beqz        $a2, . + 4 + (0x73 << 2)
    ctx->pc = 0x4CDD00u;
    {
        const bool branch_taken_0x4cdd00 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CDD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CDD00u;
        // 0x4cdd04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cdd00) {
            ctx->pc = 0x4CDED0u;
            goto label_4cded0;
        }
    }
    ctx->pc = 0x4CDD08u;
    // 0x4cdd08: 0x10c20007  beq         $a2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4CDD08u;
    {
        const bool branch_taken_0x4cdd08 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x4CDD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CDD08u;
        // 0x4cdd0c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cdd08) {
            ctx->pc = 0x4CDD28u;
            goto label_4cdd28;
        }
    }
    ctx->pc = 0x4CDD10u;
    // 0x4cdd10: 0x50c20005  beql        $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4CDD10u;
    {
        const bool branch_taken_0x4cdd10 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x4cdd10) {
            ctx->pc = 0x4CDD14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CDD10u;
            // 0x4cdd14: 0xa0850001  sb          $a1, 0x1($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CDD28u;
            goto label_4cdd28;
        }
    }
    ctx->pc = 0x4CDD18u;
    // 0x4cdd18: 0xa0850002  sb          $a1, 0x2($a0)
    ctx->pc = 0x4cdd18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x4cdd1c: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x4cdd1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x4cdd20: 0x3e00008  jr          $ra
    ctx->pc = 0x4CDD20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CDD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CDD20u;
        // 0x4cdd24: 0xa0850001  sb          $a1, 0x1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CDD20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CDD28u;
label_4cdd28:
    // 0x4cdd28: 0x3e00008  jr          $ra
    ctx->pc = 0x4CDD28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CDD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CDD28u;
        // 0x4cdd2c: 0xa0850000  sb          $a1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CDD28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CDD30u;
label_4cdd30:
    // 0x4cdd30: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x4cdd30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
    // 0x4cdd34: 0x3083000f  andi        $v1, $a0, 0xF
    ctx->pc = 0x4cdd34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x4cdd38: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x4CDD38u;
    {
        const bool branch_taken_0x4cdd38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CDD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CDD38u;
        // 0x4cdd3c: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cdd38) {
            ctx->pc = 0x4CDDB4u;
            goto label_4cddb4;
        }
    }
    ctx->pc = 0x4CDD40u;
    // 0x4cdd40: 0x30870003  andi        $a3, $a0, 0x3
    ctx->pc = 0x4cdd40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x4cdd44: 0x10e0000d  beqz        $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x4CDD44u;
    {
        const bool branch_taken_0x4cdd44 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CDD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CDD44u;
        // 0x4cdd48: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cdd44) {
            ctx->pc = 0x4CDD7Cu;
            goto label_4cdd7c;
        }
    }
    ctx->pc = 0x4CDD4Cu;
    // 0x4cdd4c: 0x473823  subu        $a3, $v0, $a3
    ctx->pc = 0x4cdd4cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4cdd50: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x4cdd50u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x4cdd54: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x4cdd54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x4cdd58: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x4cdd58u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x4cdd5c: 0x0  nop
    ctx->pc = 0x4cdd5cu;
    // NOP
label_4cdd60:
    // 0x4cdd60: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4cdd60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4cdd64: 0x0  nop
    ctx->pc = 0x4cdd64u;
    // NOP
    // 0x4cdd68: 0x0  nop
    ctx->pc = 0x4cdd68u;
    // NOP
    // 0x4cdd6c: 0x0  nop
    ctx->pc = 0x4cdd6cu;
    // NOP
    // 0x4cdd70: 0x0  nop
    ctx->pc = 0x4cdd70u;
    // NOP
    // 0x4cdd74: 0x5487fffa  bnel        $a0, $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4CDD74u;
    {
        const bool branch_taken_0x4cdd74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 7));
        if (branch_taken_0x4cdd74) {
            ctx->pc = 0x4CDD78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CDD74u;
            // 0x4cdd78: 0xa0850000  sb          $a1, 0x0($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CDD60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4cdd60;
        }
    }
    ctx->pc = 0x4CDD7Cu;
label_4cdd7c:
    // 0x4cdd7c: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x4cdd7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x4cdd80: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4CDD80u;
    {
        const bool branch_taken_0x4cdd80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CDD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CDD80u;
        // 0x4cdd84: 0x30820008  andi        $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cdd80) {
            ctx->pc = 0x4CDDA0u;
            goto label_4cdda0;
        }
    }
    ctx->pc = 0x4CDD88u;
    // 0x4cdd88: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x4cdd88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
    // 0x4cdd8c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4cdd8cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4cdd90: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x4cdd90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x4cdd94: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4cdd94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4cdd98: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x4cdd98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x4cdd9c: 0x30820008  andi        $v0, $a0, 0x8
    ctx->pc = 0x4cdd9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
label_4cdda0:
    // 0x4cdda0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4CDDA0u;
    {
        const bool branch_taken_0x4cdda0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cdda0) {
            ctx->pc = 0x4CDDB4u;
            goto label_4cddb4;
        }
    }
    ctx->pc = 0x4CDDA8u;
    // 0x4cdda8: 0xfc880000  sd          $t0, 0x0($a0)
    ctx->pc = 0x4cdda8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 8));
    // 0x4cddac: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x4cddacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x4cddb0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x4cddb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_4cddb4:
    // 0x4cddb4: 0x71081b89  pcpyld      $v1, $t0, $t0
    ctx->pc = 0x4cddb4u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x4cddb8: 0x2cc20200  sltiu       $v0, $a2, 0x200
    ctx->pc = 0x4cddb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x4cddbc: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4CDDBCu;
    {
        const bool branch_taken_0x4cddbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4cddbc) {
            ctx->pc = 0x4CDE04u;
            goto label_4cde04;
        }
    }
    ctx->pc = 0x4CDDC4u;
    // 0x4cddc4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4cddc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4cddc8: 0x3442ff80  ori         $v0, $v0, 0xFF80
    ctx->pc = 0x4cddc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
    // 0x4cddcc: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x4cddccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4cddd0: 0x823821  addu        $a3, $a0, $v0
    ctx->pc = 0x4cddd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4cddd4: 0x30c6007f  andi        $a2, $a2, 0x7F
    ctx->pc = 0x4cddd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)127);
label_4cddd8:
    // 0x4cddd8: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x4cddd8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x4cdddc: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x4cdddcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x4cdde0: 0x7c830020  sq          $v1, 0x20($a0)
    ctx->pc = 0x4cdde0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
    // 0x4cdde4: 0x7c830030  sq          $v1, 0x30($a0)
    ctx->pc = 0x4cdde4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 3));
    // 0x4cdde8: 0x7c830040  sq          $v1, 0x40($a0)
    ctx->pc = 0x4cdde8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 3));
    // 0x4cddec: 0x7c830050  sq          $v1, 0x50($a0)
    ctx->pc = 0x4cddecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 3));
    // 0x4cddf0: 0x7c830060  sq          $v1, 0x60($a0)
    ctx->pc = 0x4cddf0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 3));
    // 0x4cddf4: 0x7c830070  sq          $v1, 0x70($a0)
    ctx->pc = 0x4cddf4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 3));
    // 0x4cddf8: 0x24840080  addiu       $a0, $a0, 0x80
    ctx->pc = 0x4cddf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x4cddfc: 0x1487fff6  bne         $a0, $a3, . + 4 + (-0xA << 2)
    ctx->pc = 0x4CDDFCu;
    {
        const bool branch_taken_0x4cddfc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 7));
        if (branch_taken_0x4cddfc) {
            ctx->pc = 0x4CDDD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4cddd8;
        }
    }
    ctx->pc = 0x4CDE04u;
label_4cde04:
    // 0x4cde04: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4cde04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4cde08: 0x3442ffc0  ori         $v0, $v0, 0xFFC0
    ctx->pc = 0x4cde08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65472);
    // 0x4cde0c: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x4cde0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4cde10: 0x823821  addu        $a3, $a0, $v0
    ctx->pc = 0x4cde10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4cde14: 0x10870009  beq         $a0, $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x4CDE14u;
    {
        const bool branch_taken_0x4cde14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        ctx->pc = 0x4CDE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CDE14u;
        // 0x4cde18: 0x30c6003f  andi        $a2, $a2, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cde14) {
            ctx->pc = 0x4CDE3Cu;
            goto label_4cde3c;
        }
    }
    ctx->pc = 0x4CDE1Cu;
    // 0x4cde1c: 0x0  nop
    ctx->pc = 0x4cde1cu;
    // NOP
label_4cde20:
    // 0x4cde20: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x4cde20u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x4cde24: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x4cde24u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x4cde28: 0x7c830020  sq          $v1, 0x20($a0)
    ctx->pc = 0x4cde28u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
    // 0x4cde2c: 0x7c830030  sq          $v1, 0x30($a0)
    ctx->pc = 0x4cde2cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 3));
    // 0x4cde30: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x4cde30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x4cde34: 0x1487fffa  bne         $a0, $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4CDE34u;
    {
        const bool branch_taken_0x4cde34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 7));
        if (branch_taken_0x4cde34) {
            ctx->pc = 0x4CDE20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4cde20;
        }
    }
    ctx->pc = 0x4CDE3Cu;
label_4cde3c:
    // 0x4cde3c: 0x30c20020  andi        $v0, $a2, 0x20
    ctx->pc = 0x4cde3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32);
    // 0x4cde40: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4CDE40u;
    {
        const bool branch_taken_0x4cde40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CDE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CDE40u;
        // 0x4cde44: 0x30c20010  andi        $v0, $a2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cde40) {
            ctx->pc = 0x4CDE5Cu;
            goto label_4cde5c;
        }
    }
    ctx->pc = 0x4CDE48u;
    // 0x4cde48: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x4cde48u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x4cde4c: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x4cde4cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x4cde50: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x4cde50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x4cde54: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x4cde54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x4cde58: 0x30c20010  andi        $v0, $a2, 0x10
    ctx->pc = 0x4cde58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
label_4cde5c:
    // 0x4cde5c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4CDE5Cu;
    {
        const bool branch_taken_0x4cde5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CDE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CDE5Cu;
        // 0x4cde60: 0x30c20008  andi        $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cde5c) {
            ctx->pc = 0x4CDE74u;
            goto label_4cde74;
        }
    }
    ctx->pc = 0x4CDE64u;
    // 0x4cde64: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x4cde64u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x4cde68: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x4cde68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x4cde6c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x4cde6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x4cde70: 0x30c20008  andi        $v0, $a2, 0x8
    ctx->pc = 0x4cde70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
label_4cde74:
    // 0x4cde74: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4CDE74u;
    {
        const bool branch_taken_0x4cde74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CDE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CDE74u;
        // 0x4cde78: 0x30c20004  andi        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cde74) {
            ctx->pc = 0x4CDE8Cu;
            goto label_4cde8c;
        }
    }
    ctx->pc = 0x4CDE7Cu;
    // 0x4cde7c: 0xfc880000  sd          $t0, 0x0($a0)
    ctx->pc = 0x4cde7cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 8));
    // 0x4cde80: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x4cde80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x4cde84: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x4cde84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x4cde88: 0x30c20004  andi        $v0, $a2, 0x4
    ctx->pc = 0x4cde88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
label_4cde8c:
    // 0x4cde8c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4CDE8Cu;
    {
        const bool branch_taken_0x4cde8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cde8c) {
            ctx->pc = 0x4CDEA8u;
            goto label_4cdea8;
        }
    }
    ctx->pc = 0x4CDE94u;
    // 0x4cde94: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x4cde94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
    // 0x4cde98: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4cde98u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4cde9c: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x4cde9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x4cdea0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4cdea0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4cdea4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x4cdea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_4cdea8:
    // 0x4cdea8: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x4CDEA8u;
    {
        const bool branch_taken_0x4cdea8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CDEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CDEA8u;
        // 0x4cdeac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cdea8) {
            ctx->pc = 0x4CDED0u;
            goto label_4cded0;
        }
    }
    ctx->pc = 0x4CDEB0u;
    // 0x4cdeb0: 0x10c2ff9d  beq         $a2, $v0, . + 4 + (-0x63 << 2)
    ctx->pc = 0x4CDEB0u;
    {
        const bool branch_taken_0x4cdeb0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x4CDEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CDEB0u;
        // 0x4cdeb4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cdeb0) {
            ctx->pc = 0x4CDD28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4cdd28;
        }
    }
    ctx->pc = 0x4CDEB8u;
    // 0x4cdeb8: 0x10c20004  beq         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4CDEB8u;
    {
        const bool branch_taken_0x4cdeb8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x4CDEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CDEB8u;
        // 0x4cdebc: 0x3102ffff  andi        $v0, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cdeb8) {
            ctx->pc = 0x4CDECCu;
            goto label_4cdecc;
        }
    }
    ctx->pc = 0x4CDEC0u;
    // 0x4cdec0: 0xa0850002  sb          $a1, 0x2($a0)
    ctx->pc = 0x4cdec0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x4cdec4: 0x3e00008  jr          $ra
    ctx->pc = 0x4CDEC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CDEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CDEC4u;
        // 0x4cdec8: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CDEC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CDECCu;
label_4cdecc:
    // 0x4cdecc: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x4cdeccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_4cded0:
    // 0x4cded0: 0x3e00008  jr          $ra
    ctx->pc = 0x4CDED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CDED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CDED8u;
}
