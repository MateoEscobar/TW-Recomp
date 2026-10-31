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

// Function: sub_004CDED8
// Address: 0x4cded8 - 0x4ce110
void sub_004CDED8_0x4cded8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CDED8_0x4cded8");
#endif

    switch (ctx->pc) {
        case 0x4cdf80u: goto label_4cdf80;
        case 0x4cdff8u: goto label_4cdff8;
        case 0x4ce040u: goto label_4ce040;
        default: break;
    }

    ctx->pc = 0x4cded8u;

    // 0x4cded8: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x4cded8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x4cdedc: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x4cdedcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x4cdee0: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x4cdee0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4cdee4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x4cdee4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cdee8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x4cdee8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x4cdeec: 0x2cc3000f  sltiu       $v1, $a2, 0xF
    ctx->pc = 0x4cdeecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x4cdef0: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x4cdef0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x4cdef4: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x4CDEF4u;
    {
        const bool branch_taken_0x4cdef4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CDEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CDEF4u;
        // 0x4cdef8: 0x5283e  dsrl32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cdef4) {
            ctx->pc = 0x4CDF58u;
            goto label_4cdf58;
        }
    }
    ctx->pc = 0x4CDEFCu;
    // 0x4cdefc: 0x30c20004  andi        $v0, $a2, 0x4
    ctx->pc = 0x4cdefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
    // 0x4cdf00: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4CDF00u;
    {
        const bool branch_taken_0x4cdf00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CDF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CDF00u;
        // 0x4cdf04: 0x30c20008  andi        $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cdf00) {
            ctx->pc = 0x4CDF1Cu;
            goto label_4cdf1c;
        }
    }
    ctx->pc = 0x4CDF08u;
    // 0x4cdf08: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x4cdf08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x4cdf0c: 0xa8e50003  swl         $a1, 0x3($a3)
    ctx->pc = 0x4cdf0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x4cdf10: 0xb8e50000  swr         $a1, 0x0($a3)
    ctx->pc = 0x4cdf10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x4cdf14: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x4cdf14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x4cdf18: 0x30c20008  andi        $v0, $a2, 0x8
    ctx->pc = 0x4cdf18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
label_4cdf1c:
    // 0x4cdf1c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4CDF1Cu;
    {
        const bool branch_taken_0x4cdf1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CDF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CDF1Cu;
        // 0x4cdf20: 0x5103c  dsll32      $v0, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cdf1c) {
            ctx->pc = 0x4CDF38u;
            goto label_4cdf38;
        }
    }
    ctx->pc = 0x4CDF24u;
    // 0x4cdf24: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x4cdf24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x4cdf28: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x4cdf28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x4cdf2c: 0xb0e50007  sdl         $a1, 0x7($a3)
    ctx->pc = 0x4cdf2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4cdf30: 0xb4e50000  sdr         $a1, 0x0($a3)
    ctx->pc = 0x4cdf30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4cdf34: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x4cdf34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_4cdf38:
    // 0x4cdf38: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4cdf38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4cdf3c: 0x14c20071  bne         $a2, $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x4CDF3Cu;
    {
        const bool branch_taken_0x4cdf3c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x4CDF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CDF3Cu;
        // 0x4cdf40: 0x5123a  dsrl        $v0, $a1, 8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) >> 8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cdf3c) {
            ctx->pc = 0x4CE104u;
            goto label_4ce104;
        }
    }
    ctx->pc = 0x4CDF44u;
    // 0x4cdf44: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x4cdf44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x4cdf48: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4cdf48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4cdf4c: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x4cdf4cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x4cdf50: 0x3e00008  jr          $ra
    ctx->pc = 0x4CDF50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CDF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CDF50u;
        // 0x4cdf54: 0xa0e20001  sb          $v0, 0x1($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CDF50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CDF58u;
label_4cdf58:
    // 0x4cdf58: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x4cdf58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x4cdf5c: 0x30e3000f  andi        $v1, $a3, 0xF
    ctx->pc = 0x4cdf5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
    // 0x4cdf60: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x4CDF60u;
    {
        const bool branch_taken_0x4cdf60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CDF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CDF60u;
        // 0x4cdf64: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cdf60) {
            ctx->pc = 0x4CDFD4u;
            goto label_4cdfd4;
        }
    }
    ctx->pc = 0x4CDF68u;
    // 0x4cdf68: 0x30e80003  andi        $t0, $a3, 0x3
    ctx->pc = 0x4cdf68u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
    // 0x4cdf6c: 0x1100000b  beqz        $t0, . + 4 + (0xB << 2)
    ctx->pc = 0x4CDF6Cu;
    {
        const bool branch_taken_0x4cdf6c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CDF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CDF6Cu;
        // 0x4cdf70: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cdf6c) {
            ctx->pc = 0x4CDF9Cu;
            goto label_4cdf9c;
        }
    }
    ctx->pc = 0x4CDF74u;
    // 0x4cdf74: 0x484023  subu        $t0, $v0, $t0
    ctx->pc = 0x4cdf74u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x4cdf78: 0xc83023  subu        $a2, $a2, $t0
    ctx->pc = 0x4cdf78u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x4cdf7c: 0x1074021  addu        $t0, $t0, $a3
    ctx->pc = 0x4cdf7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_4cdf80:
    // 0x4cdf80: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x4cdf80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x4cdf84: 0x5223a  dsrl        $a0, $a1, 8
    ctx->pc = 0x4cdf84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) >> 8);
    // 0x4cdf88: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x4cdf88u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4cdf8c: 0x51e3c  dsll32      $v1, $a1, 24
    ctx->pc = 0x4cdf8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 24));
    // 0x4cdf90: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4cdf90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4cdf94: 0x14e8fffa  bne         $a3, $t0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4CDF94u;
    {
        const bool branch_taken_0x4cdf94 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        ctx->pc = 0x4CDF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CDF94u;
        // 0x4cdf98: 0x642825  or          $a1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cdf94) {
            ctx->pc = 0x4CDF80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4cdf80;
        }
    }
    ctx->pc = 0x4CDF9Cu;
label_4cdf9c:
    // 0x4cdf9c: 0x30e20004  andi        $v0, $a3, 0x4
    ctx->pc = 0x4cdf9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
    // 0x4cdfa0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4CDFA0u;
    {
        const bool branch_taken_0x4cdfa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CDFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CDFA0u;
        // 0x4cdfa4: 0x30e20008  andi        $v0, $a3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cdfa0) {
            ctx->pc = 0x4CDFC0u;
            goto label_4cdfc0;
        }
    }
    ctx->pc = 0x4CDFA8u;
    // 0x4cdfa8: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x4cdfa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x4cdfac: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4cdfacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4cdfb0: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x4cdfb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x4cdfb4: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4cdfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4cdfb8: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x4cdfb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x4cdfbc: 0x30e20008  andi        $v0, $a3, 0x8
    ctx->pc = 0x4cdfbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
label_4cdfc0:
    // 0x4cdfc0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4CDFC0u;
    {
        const bool branch_taken_0x4cdfc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cdfc0) {
            ctx->pc = 0x4CDFD4u;
            goto label_4cdfd4;
        }
    }
    ctx->pc = 0x4CDFC8u;
    // 0x4cdfc8: 0xfce50000  sd          $a1, 0x0($a3)
    ctx->pc = 0x4cdfc8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 5));
    // 0x4cdfcc: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x4cdfccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x4cdfd0: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x4cdfd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_4cdfd4:
    // 0x4cdfd4: 0x70a51b89  pcpyld      $v1, $a1, $a1
    ctx->pc = 0x4cdfd4u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 5)));
    // 0x4cdfd8: 0x2cc20200  sltiu       $v0, $a2, 0x200
    ctx->pc = 0x4cdfd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x4cdfdc: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4CDFDCu;
    {
        const bool branch_taken_0x4cdfdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4cdfdc) {
            ctx->pc = 0x4CE024u;
            goto label_4ce024;
        }
    }
    ctx->pc = 0x4CDFE4u;
    // 0x4cdfe4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4cdfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4cdfe8: 0x3442ff80  ori         $v0, $v0, 0xFF80
    ctx->pc = 0x4cdfe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
    // 0x4cdfec: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x4cdfecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4cdff0: 0xe24021  addu        $t0, $a3, $v0
    ctx->pc = 0x4cdff0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4cdff4: 0x30c6007f  andi        $a2, $a2, 0x7F
    ctx->pc = 0x4cdff4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)127);
label_4cdff8:
    // 0x4cdff8: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x4cdff8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x4cdffc: 0x7ce30010  sq          $v1, 0x10($a3)
    ctx->pc = 0x4cdffcu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 3));
    // 0x4ce000: 0x7ce30020  sq          $v1, 0x20($a3)
    ctx->pc = 0x4ce000u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 3));
    // 0x4ce004: 0x7ce30030  sq          $v1, 0x30($a3)
    ctx->pc = 0x4ce004u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 48), GPR_VEC(ctx, 3));
    // 0x4ce008: 0x7ce30040  sq          $v1, 0x40($a3)
    ctx->pc = 0x4ce008u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 64), GPR_VEC(ctx, 3));
    // 0x4ce00c: 0x7ce30050  sq          $v1, 0x50($a3)
    ctx->pc = 0x4ce00cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 80), GPR_VEC(ctx, 3));
    // 0x4ce010: 0x7ce30060  sq          $v1, 0x60($a3)
    ctx->pc = 0x4ce010u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 96), GPR_VEC(ctx, 3));
    // 0x4ce014: 0x7ce30070  sq          $v1, 0x70($a3)
    ctx->pc = 0x4ce014u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 112), GPR_VEC(ctx, 3));
    // 0x4ce018: 0x24e70080  addiu       $a3, $a3, 0x80
    ctx->pc = 0x4ce018u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 128));
    // 0x4ce01c: 0x14e8fff6  bne         $a3, $t0, . + 4 + (-0xA << 2)
    ctx->pc = 0x4CE01Cu;
    {
        const bool branch_taken_0x4ce01c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        if (branch_taken_0x4ce01c) {
            ctx->pc = 0x4CDFF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4cdff8;
        }
    }
    ctx->pc = 0x4CE024u;
label_4ce024:
    // 0x4ce024: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4ce024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4ce028: 0x3442ffc0  ori         $v0, $v0, 0xFFC0
    ctx->pc = 0x4ce028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65472);
    // 0x4ce02c: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x4ce02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4ce030: 0xe24021  addu        $t0, $a3, $v0
    ctx->pc = 0x4ce030u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4ce034: 0x10e80009  beq         $a3, $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4CE034u;
    {
        const bool branch_taken_0x4ce034 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 8));
        ctx->pc = 0x4CE038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CE034u;
        // 0x4ce038: 0x30c6003f  andi        $a2, $a2, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ce034) {
            ctx->pc = 0x4CE05Cu;
            goto label_4ce05c;
        }
    }
    ctx->pc = 0x4CE03Cu;
    // 0x4ce03c: 0x0  nop
    ctx->pc = 0x4ce03cu;
    // NOP
label_4ce040:
    // 0x4ce040: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x4ce040u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x4ce044: 0x7ce30010  sq          $v1, 0x10($a3)
    ctx->pc = 0x4ce044u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 3));
    // 0x4ce048: 0x7ce30020  sq          $v1, 0x20($a3)
    ctx->pc = 0x4ce048u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 3));
    // 0x4ce04c: 0x7ce30030  sq          $v1, 0x30($a3)
    ctx->pc = 0x4ce04cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 48), GPR_VEC(ctx, 3));
    // 0x4ce050: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x4ce050u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x4ce054: 0x14e8fffa  bne         $a3, $t0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4CE054u;
    {
        const bool branch_taken_0x4ce054 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        if (branch_taken_0x4ce054) {
            ctx->pc = 0x4CE040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ce040;
        }
    }
    ctx->pc = 0x4CE05Cu;
label_4ce05c:
    // 0x4ce05c: 0x30c20020  andi        $v0, $a2, 0x20
    ctx->pc = 0x4ce05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32);
    // 0x4ce060: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4CE060u;
    {
        const bool branch_taken_0x4ce060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CE064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CE060u;
        // 0x4ce064: 0x30c20010  andi        $v0, $a2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ce060) {
            ctx->pc = 0x4CE07Cu;
            goto label_4ce07c;
        }
    }
    ctx->pc = 0x4CE068u;
    // 0x4ce068: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x4ce068u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x4ce06c: 0x7ce30010  sq          $v1, 0x10($a3)
    ctx->pc = 0x4ce06cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 3));
    // 0x4ce070: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x4ce070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x4ce074: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x4ce074u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x4ce078: 0x30c20010  andi        $v0, $a2, 0x10
    ctx->pc = 0x4ce078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
label_4ce07c:
    // 0x4ce07c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4CE07Cu;
    {
        const bool branch_taken_0x4ce07c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CE080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CE07Cu;
        // 0x4ce080: 0x30c20008  andi        $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ce07c) {
            ctx->pc = 0x4CE094u;
            goto label_4ce094;
        }
    }
    ctx->pc = 0x4CE084u;
    // 0x4ce084: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x4ce084u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x4ce088: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x4ce088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x4ce08c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x4ce08cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x4ce090: 0x30c20008  andi        $v0, $a2, 0x8
    ctx->pc = 0x4ce090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
label_4ce094:
    // 0x4ce094: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4CE094u;
    {
        const bool branch_taken_0x4ce094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CE098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CE094u;
        // 0x4ce098: 0x30c20004  andi        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ce094) {
            ctx->pc = 0x4CE0ACu;
            goto label_4ce0ac;
        }
    }
    ctx->pc = 0x4CE09Cu;
    // 0x4ce09c: 0xfce50000  sd          $a1, 0x0($a3)
    ctx->pc = 0x4ce09cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 5));
    // 0x4ce0a0: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x4ce0a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x4ce0a4: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x4ce0a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x4ce0a8: 0x30c20004  andi        $v0, $a2, 0x4
    ctx->pc = 0x4ce0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
label_4ce0ac:
    // 0x4ce0ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4CE0ACu;
    {
        const bool branch_taken_0x4ce0ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ce0ac) {
            ctx->pc = 0x4CE0C8u;
            goto label_4ce0c8;
        }
    }
    ctx->pc = 0x4CE0B4u;
    // 0x4ce0b4: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x4ce0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x4ce0b8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4ce0b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4ce0bc: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x4ce0bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x4ce0c0: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4ce0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4ce0c4: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x4ce0c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_4ce0c8:
    // 0x4ce0c8: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x4CE0C8u;
    {
        const bool branch_taken_0x4ce0c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CE0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CE0C8u;
        // 0x4ce0cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ce0c8) {
            ctx->pc = 0x4CE104u;
            goto label_4ce104;
        }
    }
    ctx->pc = 0x4CE0D0u;
    // 0x4ce0d0: 0x10c20008  beq         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4CE0D0u;
    {
        const bool branch_taken_0x4ce0d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x4CE0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CE0D0u;
        // 0x4ce0d4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ce0d0) {
            ctx->pc = 0x4CE0F4u;
            goto label_4ce0f4;
        }
    }
    ctx->pc = 0x4CE0D8u;
    // 0x4ce0d8: 0x10c20009  beq         $a2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4CE0D8u;
    {
        const bool branch_taken_0x4ce0d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x4CE0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CE0D8u;
        // 0x4ce0dc: 0x30a2ffff  andi        $v0, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ce0d8) {
            ctx->pc = 0x4CE100u;
            goto label_4ce100;
        }
    }
    ctx->pc = 0x4CE0E0u;
    // 0x4ce0e0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x4ce0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x4ce0e4: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x4ce0e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x4ce0e8: 0xa0e20002  sb          $v0, 0x2($a3)
    ctx->pc = 0x4ce0e8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x4ce0ec: 0x3e00008  jr          $ra
    ctx->pc = 0x4CE0ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CE0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CE0ECu;
        // 0x4ce0f0: 0xa4e30000  sh          $v1, 0x0($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CE0ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CE0F4u;
label_4ce0f4:
    // 0x4ce0f4: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x4ce0f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x4ce0f8: 0x3e00008  jr          $ra
    ctx->pc = 0x4CE0F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CE0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CE0F8u;
        // 0x4ce0fc: 0xa0e20000  sb          $v0, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CE0F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CE100u;
label_4ce100:
    // 0x4ce100: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x4ce100u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
label_4ce104:
    // 0x4ce104: 0x3e00008  jr          $ra
    ctx->pc = 0x4CE104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CE104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CE10Cu;
    // 0x4ce10c: 0x0  nop
    ctx->pc = 0x4ce10cu;
    // NOP
    ctx->pc = 0x4ce110u;
}
