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

// Function: sub_004ADC90
// Address: 0x4adc90 - 0x4addf0
void sub_004ADC90_0x4adc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ADC90_0x4adc90");
#endif

    ctx->pc = 0x4adc90u;

    // 0x4adc90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4adc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4adc94: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x4adc94u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4adc98: 0xa0782d  daddu       $t7, $a1, $zero
    ctx->pc = 0x4adc98u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4adc9c: 0xc0c02d  daddu       $t8, $a2, $zero
    ctx->pc = 0x4adc9cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4adca0: 0x11e00014  beqz        $t7, . + 4 + (0x14 << 2)
    ctx->pc = 0x4ADCA0u;
    {
        const bool branch_taken_0x4adca0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ADCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADCA0u;
        // 0x4adca4: 0xe0c82d  daddu       $t9, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4adca0) {
            ctx->pc = 0x4ADCF4u;
            goto label_4adcf4;
        }
    }
    ctx->pc = 0x4ADCA8u;
    // 0x4adca8: 0x25820010  addiu       $v0, $t4, 0x10
    ctx->pc = 0x4adca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x4adcac: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4adcacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4adcb0: 0xad820008  sw          $v0, 0x8($t4)
    ctx->pc = 0x4adcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 2));
    // 0x4adcb4: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x4adcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x4adcb8: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x4adcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x4adcbc: 0x24630668  addiu       $v1, $v1, 0x668
    ctx->pc = 0x4adcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1640));
    // 0x4adcc0: 0xa044001a  sb          $a0, 0x1A($v0)
    ctx->pc = 0x4adcc0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 26), (uint8_t)GPR_U32(ctx, 4));
    // 0x4adcc4: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x4adcc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4adcc8: 0xa040001b  sb          $zero, 0x1B($v0)
    ctx->pc = 0x4adcc8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x4adccc: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x4adcccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x4adcd0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4adcd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4adcd4: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x4adcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x4adcd8: 0xa4460018  sh          $a2, 0x18($v0)
    ctx->pc = 0x4adcd8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 24), (uint16_t)GPR_U32(ctx, 6));
    // 0x4adcdc: 0xfc440010  sd          $a0, 0x10($v0)
    ctx->pc = 0x4adcdcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 4));
    // 0x4adce0: 0xac45001c  sw          $a1, 0x1C($v0)
    ctx->pc = 0x4adce0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 5));
    // 0x4adce4: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x4adce4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x4adce8: 0xad800010  sw          $zero, 0x10($t4)
    ctx->pc = 0x4adce8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 16), GPR_U32(ctx, 0));
    // 0x4adcec: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x4adcecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x4adcf0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x4adcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_4adcf4:
    // 0x4adcf4: 0x8d8b0000  lw          $t3, 0x0($t4)
    ctx->pc = 0x4adcf4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4adcf8: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x4adcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x4adcfc: 0x24620490  addiu       $v0, $v1, 0x490
    ctx->pc = 0x4adcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1168));
    // 0x4add00: 0x8d890008  lw          $t1, 0x8($t4)
    ctx->pc = 0x4add00u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x4add04: 0xad620028  sw          $v0, 0x28($t3)
    ctx->pc = 0x4add04u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 40), GPR_U32(ctx, 2));
    // 0x4add08: 0x3c0a0059  lui         $t2, 0x59
    ctx->pc = 0x4add08u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)89 << 16));
    // 0x4add0c: 0x94480008  lhu         $t0, 0x8($v0)
    ctx->pc = 0x4add0cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)FAST_READ16(0x590498u));
    // 0x4add10: 0x254704a0  addiu       $a3, $t2, 0x4A0
    ctx->pc = 0x4add10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 1184));
    // 0x4add14: 0xdc450008  ld          $a1, 0x8($v0)
    ctx->pc = 0x4add14u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x590498u));
    // 0x4add18: 0x1893023  subu        $a2, $t4, $t1
    ctx->pc = 0x4add18u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
    // 0x4add1c: 0xdc640490  ld          $a0, 0x490($v1)
    ctx->pc = 0x4add1cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 1168)));
    // 0x4add20: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x4add20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x4add24: 0xffa50008  sd          $a1, 0x8($sp)
    ctx->pc = 0x4add24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 5));
    // 0x4add28: 0x2563fff8  addiu       $v1, $t3, -0x8
    ctx->pc = 0x4add28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967288));
    // 0x4add2c: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x4add2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
    // 0x4add30: 0x1831823  subu        $v1, $t4, $v1
    ctx->pc = 0x4add30u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x4add34: 0xad7d0028  sw          $sp, 0x28($t3)
    ctx->pc = 0x4add34u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 40), GPR_U32(ctx, 29));
    // 0x4add38: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x4add38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x4add3c: 0xad270028  sw          $a3, 0x28($t1)
    ctx->pc = 0x4add3cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 7));
    // 0x4add40: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x4add40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4add44: 0xad800004  sw          $zero, 0x4($t4)
    ctx->pc = 0x4add44u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 0));
    // 0x4add48: 0x3c0e0059  lui         $t6, 0x59
    ctx->pc = 0x4add48u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)89 << 16));
    // 0x4add4c: 0x94e20008  lhu         $v0, 0x8($a3)
    ctx->pc = 0x4add4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x4add50: 0x25cd0480  addiu       $t5, $t6, 0x480
    ctx->pc = 0x4add50u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 14), 1152));
    // 0x4add54: 0xdce30008  ld          $v1, 0x8($a3)
    ctx->pc = 0x4add54u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x4add58: 0xdd4404a0  ld          $a0, 0x4A0($t2)
    ctx->pc = 0x4add58u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 10), 1184)));
    // 0x4add5c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x4add5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4add60: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x4add60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    // 0x4add64: 0xffa40010  sd          $a0, 0x10($sp)
    ctx->pc = 0x4add64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
    // 0x4add68: 0xad250028  sw          $a1, 0x28($t1)
    ctx->pc = 0x4add68u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 5));
    // 0x4add6c: 0xa7a80008  sh          $t0, 0x8($sp)
    ctx->pc = 0x4add6cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 8));
    // 0x4add70: 0xa7a20018  sh          $v0, 0x18($sp)
    ctx->pc = 0x4add70u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x4add74: 0x15e0000c  bnez        $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x4ADD74u;
    {
        const bool branch_taken_0x4add74 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x4ADD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADD74u;
        // 0x4add78: 0xad6d0028  sw          $t5, 0x28($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 40), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4add74) {
            ctx->pc = 0x4ADDA8u;
            goto label_4adda8;
        }
    }
    ctx->pc = 0x4ADD7Cu;
    // 0x4add7c: 0xddc60480  ld          $a2, 0x480($t6)
    ctx->pc = 0x4add7cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 14), 1152)));
    // 0x4add80: 0x2562fff0  addiu       $v0, $t3, -0x10
    ctx->pc = 0x4add80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967280));
    // 0x4add84: 0xdda40008  ld          $a0, 0x8($t5)
    ctx->pc = 0x4add84u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x4add88: 0x1821023  subu        $v0, $t4, $v0
    ctx->pc = 0x4add88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x4add8c: 0x95a30008  lhu         $v1, 0x8($t5)
    ctx->pc = 0x4add8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x4add90: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x4add90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4add94: 0xffa40028  sd          $a0, 0x28($sp)
    ctx->pc = 0x4add94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 4));
    // 0x4add98: 0xffa60020  sd          $a2, 0x20($sp)
    ctx->pc = 0x4add98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 6));
    // 0x4add9c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4add9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4adda0: 0xad650028  sw          $a1, 0x28($t3)
    ctx->pc = 0x4adda0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 40), GPR_U32(ctx, 5));
    // 0x4adda4: 0xa7a30028  sh          $v1, 0x28($sp)
    ctx->pc = 0x4adda4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 40), (uint16_t)GPR_U32(ctx, 3));
label_4adda8:
    // 0x4adda8: 0x57000003  bnel        $t8, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4ADDA8u;
    {
        const bool branch_taken_0x4adda8 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 0));
        if (branch_taken_0x4adda8) {
            ctx->pc = 0x4ADDACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ADDA8u;
            // 0x4addac: 0xa160001a  sb          $zero, 0x1A($t3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 11), 26), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4ADDB8u;
            goto label_4addb8;
        }
    }
    ctx->pc = 0x4ADDB0u;
    // 0x4addb0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4addb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4addb4: 0xa162001a  sb          $v0, 0x1A($t3)
    ctx->pc = 0x4addb4u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 26), (uint8_t)GPR_U32(ctx, 2));
label_4addb8:
    // 0x4addb8: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x4addb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4addbc: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x4addbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x4addc0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4addc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4addc4: 0xad780000  sw          $t8, 0x0($t3)
    ctx->pc = 0x4addc4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 24));
    // 0x4addc8: 0xad790004  sw          $t9, 0x4($t3)
    ctx->pc = 0x4addc8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 25));
    // 0x4addcc: 0x180102d  daddu       $v0, $t4, $zero
    ctx->pc = 0x4addccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4addd0: 0xa5630018  sh          $v1, 0x18($t3)
    ctx->pc = 0x4addd0u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x4addd4: 0xfd640010  sd          $a0, 0x10($t3)
    ctx->pc = 0x4addd4u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 16), GPR_U64(ctx, 4));
    // 0x4addd8: 0xad65001c  sw          $a1, 0x1C($t3)
    ctx->pc = 0x4addd8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 28), GPR_U32(ctx, 5));
    // 0x4adddc: 0xad600020  sw          $zero, 0x20($t3)
    ctx->pc = 0x4adddcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 32), GPR_U32(ctx, 0));
    // 0x4adde0: 0xa160001b  sb          $zero, 0x1B($t3)
    ctx->pc = 0x4adde0u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x4adde4: 0xad600008  sw          $zero, 0x8($t3)
    ctx->pc = 0x4adde4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 0));
    // 0x4adde8: 0x3e00008  jr          $ra
    ctx->pc = 0x4ADDE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ADDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADDE8u;
        // 0x4addec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ADDE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ADDF0u;
}
