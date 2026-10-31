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

// Function: sub_0033AB98
// Address: 0x33ab98 - 0x33ae38
void sub_0033AB98_0x33ab98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033AB98_0x33ab98");
#endif

    switch (ctx->pc) {
        case 0x33ab98u: goto label_33ab98;
        case 0x33ab9cu: goto label_33ab9c;
        case 0x33aba0u: goto label_33aba0;
        case 0x33aba4u: goto label_33aba4;
        case 0x33aba8u: goto label_33aba8;
        case 0x33abacu: goto label_33abac;
        case 0x33abb0u: goto label_33abb0;
        case 0x33abb4u: goto label_33abb4;
        case 0x33abb8u: goto label_33abb8;
        case 0x33abbcu: goto label_33abbc;
        case 0x33abc0u: goto label_33abc0;
        case 0x33abc4u: goto label_33abc4;
        case 0x33abc8u: goto label_33abc8;
        case 0x33abccu: goto label_33abcc;
        case 0x33abd0u: goto label_33abd0;
        case 0x33abd4u: goto label_33abd4;
        case 0x33abd8u: goto label_33abd8;
        case 0x33abdcu: goto label_33abdc;
        case 0x33abe0u: goto label_33abe0;
        case 0x33abe4u: goto label_33abe4;
        case 0x33abe8u: goto label_33abe8;
        case 0x33abecu: goto label_33abec;
        case 0x33abf0u: goto label_33abf0;
        case 0x33abf4u: goto label_33abf4;
        case 0x33abf8u: goto label_33abf8;
        case 0x33abfcu: goto label_33abfc;
        case 0x33ac00u: goto label_33ac00;
        case 0x33ac04u: goto label_33ac04;
        case 0x33ac08u: goto label_33ac08;
        case 0x33ac0cu: goto label_33ac0c;
        case 0x33ac10u: goto label_33ac10;
        case 0x33ac14u: goto label_33ac14;
        case 0x33ac18u: goto label_33ac18;
        case 0x33ac1cu: goto label_33ac1c;
        case 0x33ac20u: goto label_33ac20;
        case 0x33ac24u: goto label_33ac24;
        case 0x33ac28u: goto label_33ac28;
        case 0x33ac2cu: goto label_33ac2c;
        case 0x33ac30u: goto label_33ac30;
        case 0x33ac34u: goto label_33ac34;
        case 0x33ac38u: goto label_33ac38;
        case 0x33ac3cu: goto label_33ac3c;
        case 0x33ac40u: goto label_33ac40;
        case 0x33ac44u: goto label_33ac44;
        case 0x33ac48u: goto label_33ac48;
        case 0x33ac4cu: goto label_33ac4c;
        case 0x33ac50u: goto label_33ac50;
        case 0x33ac54u: goto label_33ac54;
        case 0x33ac58u: goto label_33ac58;
        case 0x33ac5cu: goto label_33ac5c;
        case 0x33ac60u: goto label_33ac60;
        case 0x33ac64u: goto label_33ac64;
        case 0x33ac68u: goto label_33ac68;
        case 0x33ac6cu: goto label_33ac6c;
        case 0x33ac70u: goto label_33ac70;
        case 0x33ac74u: goto label_33ac74;
        case 0x33ac78u: goto label_33ac78;
        case 0x33ac7cu: goto label_33ac7c;
        case 0x33ac80u: goto label_33ac80;
        case 0x33ac84u: goto label_33ac84;
        case 0x33ac88u: goto label_33ac88;
        case 0x33ac8cu: goto label_33ac8c;
        case 0x33ac90u: goto label_33ac90;
        case 0x33ac94u: goto label_33ac94;
        case 0x33ac98u: goto label_33ac98;
        case 0x33ac9cu: goto label_33ac9c;
        case 0x33aca0u: goto label_33aca0;
        case 0x33aca4u: goto label_33aca4;
        case 0x33aca8u: goto label_33aca8;
        case 0x33acacu: goto label_33acac;
        case 0x33acb0u: goto label_33acb0;
        case 0x33acb4u: goto label_33acb4;
        case 0x33acb8u: goto label_33acb8;
        case 0x33acbcu: goto label_33acbc;
        case 0x33acc0u: goto label_33acc0;
        case 0x33acc4u: goto label_33acc4;
        case 0x33acc8u: goto label_33acc8;
        case 0x33acccu: goto label_33accc;
        case 0x33acd0u: goto label_33acd0;
        case 0x33acd4u: goto label_33acd4;
        case 0x33acd8u: goto label_33acd8;
        case 0x33acdcu: goto label_33acdc;
        case 0x33ace0u: goto label_33ace0;
        case 0x33ace4u: goto label_33ace4;
        case 0x33ace8u: goto label_33ace8;
        case 0x33acecu: goto label_33acec;
        case 0x33acf0u: goto label_33acf0;
        case 0x33acf4u: goto label_33acf4;
        case 0x33acf8u: goto label_33acf8;
        case 0x33acfcu: goto label_33acfc;
        case 0x33ad00u: goto label_33ad00;
        case 0x33ad04u: goto label_33ad04;
        case 0x33ad08u: goto label_33ad08;
        case 0x33ad0cu: goto label_33ad0c;
        case 0x33ad10u: goto label_33ad10;
        case 0x33ad14u: goto label_33ad14;
        case 0x33ad18u: goto label_33ad18;
        case 0x33ad1cu: goto label_33ad1c;
        case 0x33ad20u: goto label_33ad20;
        case 0x33ad24u: goto label_33ad24;
        case 0x33ad28u: goto label_33ad28;
        case 0x33ad2cu: goto label_33ad2c;
        case 0x33ad30u: goto label_33ad30;
        case 0x33ad34u: goto label_33ad34;
        case 0x33ad38u: goto label_33ad38;
        case 0x33ad3cu: goto label_33ad3c;
        case 0x33ad40u: goto label_33ad40;
        case 0x33ad44u: goto label_33ad44;
        case 0x33ad48u: goto label_33ad48;
        case 0x33ad4cu: goto label_33ad4c;
        case 0x33ad50u: goto label_33ad50;
        case 0x33ad54u: goto label_33ad54;
        case 0x33ad58u: goto label_33ad58;
        case 0x33ad5cu: goto label_33ad5c;
        case 0x33ad60u: goto label_33ad60;
        case 0x33ad64u: goto label_33ad64;
        case 0x33ad68u: goto label_33ad68;
        case 0x33ad6cu: goto label_33ad6c;
        case 0x33ad70u: goto label_33ad70;
        case 0x33ad74u: goto label_33ad74;
        case 0x33ad78u: goto label_33ad78;
        case 0x33ad7cu: goto label_33ad7c;
        case 0x33ad80u: goto label_33ad80;
        case 0x33ad84u: goto label_33ad84;
        case 0x33ad88u: goto label_33ad88;
        case 0x33ad8cu: goto label_33ad8c;
        case 0x33ad90u: goto label_33ad90;
        case 0x33ad94u: goto label_33ad94;
        case 0x33ad98u: goto label_33ad98;
        case 0x33ad9cu: goto label_33ad9c;
        case 0x33ada0u: goto label_33ada0;
        case 0x33ada4u: goto label_33ada4;
        case 0x33ada8u: goto label_33ada8;
        case 0x33adacu: goto label_33adac;
        case 0x33adb0u: goto label_33adb0;
        case 0x33adb4u: goto label_33adb4;
        case 0x33adb8u: goto label_33adb8;
        case 0x33adbcu: goto label_33adbc;
        case 0x33adc0u: goto label_33adc0;
        case 0x33adc4u: goto label_33adc4;
        case 0x33adc8u: goto label_33adc8;
        case 0x33adccu: goto label_33adcc;
        case 0x33add0u: goto label_33add0;
        case 0x33add4u: goto label_33add4;
        case 0x33add8u: goto label_33add8;
        case 0x33addcu: goto label_33addc;
        case 0x33ade0u: goto label_33ade0;
        case 0x33ade4u: goto label_33ade4;
        case 0x33ade8u: goto label_33ade8;
        case 0x33adecu: goto label_33adec;
        case 0x33adf0u: goto label_33adf0;
        case 0x33adf4u: goto label_33adf4;
        case 0x33adf8u: goto label_33adf8;
        case 0x33adfcu: goto label_33adfc;
        case 0x33ae00u: goto label_33ae00;
        case 0x33ae04u: goto label_33ae04;
        case 0x33ae08u: goto label_33ae08;
        case 0x33ae0cu: goto label_33ae0c;
        case 0x33ae10u: goto label_33ae10;
        case 0x33ae14u: goto label_33ae14;
        case 0x33ae18u: goto label_33ae18;
        case 0x33ae1cu: goto label_33ae1c;
        case 0x33ae20u: goto label_33ae20;
        case 0x33ae24u: goto label_33ae24;
        case 0x33ae28u: goto label_33ae28;
        case 0x33ae2cu: goto label_33ae2c;
        case 0x33ae30u: goto label_33ae30;
        case 0x33ae34u: goto label_33ae34;
        default: break;
    }

    ctx->pc = 0x33ab98u;

label_33ab98:
    // 0x33ab98: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x33ab98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_33ab9c:
    // 0x33ab9c: 0x24050602  addiu       $a1, $zero, 0x602
    ctx->pc = 0x33ab9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1538));
label_33aba0:
    // 0x33aba0: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x33aba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_33aba4:
    // 0x33aba4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x33aba4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33aba8:
    // 0x33aba8: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x33aba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_33abac:
    // 0x33abac: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x33abacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_33abb0:
    // 0x33abb0: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x33abb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_33abb4:
    // 0x33abb4: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x33abb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_33abb8:
    // 0x33abb8: 0x24846f08  addiu       $a0, $a0, 0x6F08
    ctx->pc = 0x33abb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28424));
label_33abbc:
    // 0x33abbc: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x33abbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_33abc0:
    // 0x33abc0: 0x3c120057  lui         $s2, 0x57
    ctx->pc = 0x33abc0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)87 << 16));
label_33abc4:
    // 0x33abc4: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x33abc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_33abc8:
    // 0x33abc8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x33abc8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_33abcc:
    // 0x33abcc: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x33abccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_33abd0:
    // 0x33abd0: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x33abd0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33abd4:
    // 0x33abd4: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x33abd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_33abd8:
    // 0x33abd8: 0x240f02d  daddu       $fp, $s2, $zero
    ctx->pc = 0x33abd8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33abdc:
    // 0x33abdc: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x33abdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_33abe0:
    // 0x33abe0: 0x26526f20  addiu       $s2, $s2, 0x6F20
    ctx->pc = 0x33abe0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 28448));
label_33abe4:
    // 0x33abe4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x33abe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_33abe8:
    // 0x33abe8: 0xc110644  jal         func_441910
label_33abec:
    if (ctx->pc == 0x33ABECu) {
        ctx->pc = 0x33ABECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ABE8u;
        // 0x33abec: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33ABF0u;
        goto label_33abf0;
    }
    ctx->pc = 0x33ABE8u;
    SET_GPR_U32(ctx, 31, 0x33ABF0u);
    ctx->pc = 0x33ABECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33ABE8u;
    // 0x33abec: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x441910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x441910u, 0x33ABE8u, 0x33ABF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33ABF0u;
label_33abf0:
    // 0x33abf0: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x33abf0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_33abf4:
    // 0x33abf4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x33abf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_33abf8:
    // 0x33abf8: 0xac6227ec  sw          $v0, 0x27EC($v1)
    ctx->pc = 0x33abf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10220), GPR_U32(ctx, 2));
label_33abfc:
    // 0x33abfc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x33abfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_33ac00:
    // 0x33ac00: 0x84e40078  lh          $a0, 0x78($a3)
    ctx->pc = 0x33ac00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 120)));
label_33ac04:
    // 0x33ac04: 0x27a60034  addiu       $a2, $sp, 0x34
    ctx->pc = 0x33ac04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_33ac08:
    // 0x33ac08: 0x8ce2007c  lw          $v0, 0x7C($a3)
    ctx->pc = 0x33ac08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 124)));
label_33ac0c:
    // 0x33ac0c: 0x40f809  jalr        $v0
label_33ac10:
    if (ctx->pc == 0x33AC10u) {
        ctx->pc = 0x33AC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AC0Cu;
        // 0x33ac10: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AC14u;
        goto label_33ac14;
    }
    ctx->pc = 0x33AC0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33AC14u);
        ctx->pc = 0x33AC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AC0Cu;
        // 0x33ac10: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33AC0Cu, 0x33AC14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33AC14u;
label_33ac14:
    // 0x33ac14: 0xc0ceaca  jal         func_33AB28
label_33ac18:
    if (ctx->pc == 0x33AC18u) {
        ctx->pc = 0x33AC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AC14u;
        // 0x33ac18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AC1Cu;
        goto label_33ac1c;
    }
    ctx->pc = 0x33AC14u;
    SET_GPR_U32(ctx, 31, 0x33AC1Cu);
    ctx->pc = 0x33AC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AC14u;
    // 0x33ac18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AB28u, 0x33AC14u, 0x33AC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AC1Cu;
label_33ac1c:
    // 0x33ac1c: 0x8e0727e4  lw          $a3, 0x27E4($s0)
    ctx->pc = 0x33ac1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_33ac20:
    // 0x33ac20: 0x3c110057  lui         $s1, 0x57
    ctx->pc = 0x33ac20u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)87 << 16));
label_33ac24:
    // 0x33ac24: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x33ac24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_33ac28:
    // 0x33ac28: 0x26316f28  addiu       $s1, $s1, 0x6F28
    ctx->pc = 0x33ac28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 28456));
label_33ac2c:
    // 0x33ac2c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x33ac2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_33ac30:
    // 0x33ac30: 0x8fa60034  lw          $a2, 0x34($sp)
    ctx->pc = 0x33ac30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_33ac34:
    // 0x33ac34: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x33ac34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_33ac38:
    // 0x33ac38: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x33ac38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_33ac3c:
    // 0x33ac3c: 0x40f809  jalr        $v0
label_33ac40:
    if (ctx->pc == 0x33AC40u) {
        ctx->pc = 0x33AC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AC3Cu;
        // 0x33ac40: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AC44u;
        goto label_33ac44;
    }
    ctx->pc = 0x33AC3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33AC44u);
        ctx->pc = 0x33AC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AC3Cu;
        // 0x33ac40: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33AC3Cu, 0x33AC44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33AC44u;
label_33ac44:
    // 0x33ac44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33ac44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33ac48:
    // 0x33ac48: 0xc0ceaca  jal         func_33AB28
label_33ac4c:
    if (ctx->pc == 0x33AC4Cu) {
        ctx->pc = 0x33AC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AC48u;
        // 0x33ac4c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AC50u;
        goto label_33ac50;
    }
    ctx->pc = 0x33AC48u;
    SET_GPR_U32(ctx, 31, 0x33AC50u);
    ctx->pc = 0x33AC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AC48u;
    // 0x33ac4c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AB28u, 0x33AC48u, 0x33AC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AC50u;
label_33ac50:
    // 0x33ac50: 0xc0ceaca  jal         func_33AB28
label_33ac54:
    if (ctx->pc == 0x33AC54u) {
        ctx->pc = 0x33AC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AC50u;
        // 0x33ac54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AC58u;
        goto label_33ac58;
    }
    ctx->pc = 0x33AC50u;
    SET_GPR_U32(ctx, 31, 0x33AC58u);
    ctx->pc = 0x33AC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AC50u;
    // 0x33ac54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AB28u, 0x33AC50u, 0x33AC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AC58u;
label_33ac58:
    // 0x33ac58: 0x26640048  addiu       $a0, $s3, 0x48
    ctx->pc = 0x33ac58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
label_33ac5c:
    // 0x33ac5c: 0x8fb10030  lw          $s1, 0x30($sp)
    ctx->pc = 0x33ac5cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_33ac60:
    // 0x33ac60: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x33ac60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_33ac64:
    // 0x33ac64: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x33ac64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_33ac68:
    // 0x33ac68: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x33ac68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_33ac6c:
    // 0x33ac6c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x33ac6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_33ac70:
    // 0x33ac70: 0x10620043  beq         $v1, $v0, . + 4 + (0x43 << 2)
label_33ac74:
    if (ctx->pc == 0x33AC74u) {
        ctx->pc = 0x33AC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AC70u;
        // 0x33ac74: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AC78u;
        goto label_33ac78;
    }
    ctx->pc = 0x33AC70u;
    {
        const bool branch_taken_0x33ac70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x33AC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AC70u;
        // 0x33ac74: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ac70) {
            ctx->pc = 0x33AD80u;
            goto label_33ad80;
        }
    }
    ctx->pc = 0x33AC78u;
label_33ac78:
    // 0x33ac78: 0x3c160057  lui         $s6, 0x57
    ctx->pc = 0x33ac78u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)87 << 16));
label_33ac7c:
    // 0x33ac7c: 0x3c150057  lui         $s5, 0x57
    ctx->pc = 0x33ac7cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)87 << 16));
label_33ac80:
    // 0x33ac80: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x33ac80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_33ac84:
    // 0x33ac84: 0x8c500014  lw          $s0, 0x14($v0)
    ctx->pc = 0x33ac84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_33ac88:
    // 0x33ac88: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x33ac88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_33ac8c:
    // 0x33ac8c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x33ac8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_33ac90:
    // 0x33ac90: 0xd13823  subu        $a3, $a2, $s1
    ctx->pc = 0x33ac90u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
label_33ac94:
    // 0x33ac94: 0xc29021  addu        $s2, $a2, $v0
    ctx->pc = 0x33ac94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_33ac98:
    // 0x33ac98: 0x2ce20080  sltiu       $v0, $a3, 0x80
    ctx->pc = 0x33ac98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
label_33ac9c:
    // 0x33ac9c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_33aca0:
    if (ctx->pc == 0x33ACA0u) {
        ctx->pc = 0x33ACA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AC9Cu;
        // 0x33aca0: 0x287a021  addu        $s4, $s4, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33ACA4u;
        goto label_33aca4;
    }
    ctx->pc = 0x33AC9Cu;
    {
        const bool branch_taken_0x33ac9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33ACA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AC9Cu;
        // 0x33aca0: 0x287a021  addu        $s4, $s4, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ac9c) {
            ctx->pc = 0x33ACB8u;
            goto label_33acb8;
        }
    }
    ctx->pc = 0x33ACA4u;
label_33aca4:
    // 0x33aca4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33aca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33aca8:
    // 0x33aca8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x33aca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_33acac:
    // 0x33acac: 0x26c46f40  addiu       $a0, $s6, 0x6F40
    ctx->pc = 0x33acacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 28480));
label_33acb0:
    // 0x33acb0: 0xc0ceaca  jal         func_33AB28
label_33acb4:
    if (ctx->pc == 0x33ACB4u) {
        ctx->pc = 0x33ACB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ACB0u;
        // 0x33acb4: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33ACB8u;
        goto label_33acb8;
    }
    ctx->pc = 0x33ACB0u;
    SET_GPR_U32(ctx, 31, 0x33ACB8u);
    ctx->pc = 0x33ACB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33ACB0u;
    // 0x33acb4: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AB28u, 0x33ACB0u, 0x33ACB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33ACB8u;
label_33acb8:
    // 0x33acb8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x33acb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_33acbc:
    // 0x33acbc: 0x26a46f70  addiu       $a0, $s5, 0x6F70
    ctx->pc = 0x33acbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 28528));
label_33acc0:
    // 0x33acc0: 0x920b000b  lbu         $t3, 0xB($s0)
    ctx->pc = 0x33acc0u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
label_33acc4:
    // 0x33acc4: 0x2607000c  addiu       $a3, $s0, 0xC
    ctx->pc = 0x33acc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_33acc8:
    // 0x33acc8: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x33acc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_33accc:
    // 0x33accc: 0x2608002c  addiu       $t0, $s0, 0x2C
    ctx->pc = 0x33acccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_33acd0:
    // 0x33acd0: 0x96090008  lhu         $t1, 0x8($s0)
    ctx->pc = 0x33acd0u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_33acd4:
    // 0x33acd4: 0x260a004c  addiu       $t2, $s0, 0x4C
    ctx->pc = 0x33acd4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
label_33acd8:
    // 0x33acd8: 0xc0ceaca  jal         func_33AB28
label_33acdc:
    if (ctx->pc == 0x33ACDCu) {
        ctx->pc = 0x33ACDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ACD8u;
        // 0x33acdc: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33ACE0u;
        goto label_33ace0;
    }
    ctx->pc = 0x33ACD8u;
    SET_GPR_U32(ctx, 31, 0x33ACE0u);
    ctx->pc = 0x33ACDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33ACD8u;
    // 0x33acdc: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AB28u, 0x33ACD8u, 0x33ACE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33ACE0u;
label_33ace0:
    // 0x33ace0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x33ace0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_33ace4:
    // 0x33ace4: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x33ace4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_33ace8:
    // 0x33ace8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x33ace8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_33acec:
    // 0x33acec: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_33acf0:
    if (ctx->pc == 0x33ACF0u) {
        ctx->pc = 0x33ACF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ACECu;
        // 0x33acf0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33ACF4u;
        goto label_33acf4;
    }
    ctx->pc = 0x33ACECu;
    {
        const bool branch_taken_0x33acec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33ACF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ACECu;
        // 0x33acf0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33acec) {
            ctx->pc = 0x33AD28u;
            goto label_33ad28;
        }
    }
    ctx->pc = 0x33ACF4u;
label_33acf4:
    // 0x33acf4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x33acf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_33acf8:
    // 0x33acf8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x33acf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_33acfc:
    // 0x33acfc: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_33ad00:
    if (ctx->pc == 0x33AD00u) {
        ctx->pc = 0x33AD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ACFCu;
        // 0x33ad00: 0x26660048  addiu       $a2, $s3, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AD04u;
        goto label_33ad04;
    }
    ctx->pc = 0x33ACFCu;
    {
        const bool branch_taken_0x33acfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ACFCu;
        // 0x33ad00: 0x26660048  addiu       $a2, $s3, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33acfc) {
            ctx->pc = 0x33AD68u;
            goto label_33ad68;
        }
    }
    ctx->pc = 0x33AD04u;
label_33ad04:
    // 0x33ad04: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x33ad04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_33ad08:
    // 0x33ad08: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x33ad08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_33ad0c:
    // 0x33ad0c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x33ad0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_33ad10:
    // 0x33ad10: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x33ad10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_33ad14:
    // 0x33ad14: 0x0  nop
    ctx->pc = 0x33ad14u;
    // NOP
label_33ad18:
    // 0x33ad18: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_33ad1c:
    if (ctx->pc == 0x33AD1Cu) {
        ctx->pc = 0x33AD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AD18u;
        // 0x33ad1c: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AD20u;
        goto label_33ad20;
    }
    ctx->pc = 0x33AD18u;
    {
        const bool branch_taken_0x33ad18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33ad18) {
            ctx->pc = 0x33AD1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33AD18u;
            // 0x33ad1c: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33AD08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33ad08;
        }
    }
    ctx->pc = 0x33AD20u;
label_33ad20:
    // 0x33ad20: 0x10000012  b           . + 4 + (0x12 << 2)
label_33ad24:
    if (ctx->pc == 0x33AD24u) {
        ctx->pc = 0x33AD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AD20u;
        // 0x33ad24: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AD28u;
        goto label_33ad28;
    }
    ctx->pc = 0x33AD20u;
    {
        const bool branch_taken_0x33ad20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AD20u;
        // 0x33ad24: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ad20) {
            ctx->pc = 0x33AD6Cu;
            goto label_33ad6c;
        }
    }
    ctx->pc = 0x33AD28u;
label_33ad28:
    // 0x33ad28: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x33ad28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_33ad2c:
    // 0x33ad2c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x33ad2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_33ad30:
    // 0x33ad30: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_33ad34:
    if (ctx->pc == 0x33AD34u) {
        ctx->pc = 0x33AD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AD30u;
        // 0x33ad34: 0x26660048  addiu       $a2, $s3, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AD38u;
        goto label_33ad38;
    }
    ctx->pc = 0x33AD30u;
    {
        const bool branch_taken_0x33ad30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x33AD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AD30u;
        // 0x33ad34: 0x26660048  addiu       $a2, $s3, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ad30) {
            ctx->pc = 0x33AD58u;
            goto label_33ad58;
        }
    }
    ctx->pc = 0x33AD38u;
label_33ad38:
    // 0x33ad38: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x33ad38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_33ad3c:
    // 0x33ad3c: 0x0  nop
    ctx->pc = 0x33ad3cu;
    // NOP
label_33ad40:
    // 0x33ad40: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x33ad40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_33ad44:
    // 0x33ad44: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x33ad44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_33ad48:
    // 0x33ad48: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x33ad48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_33ad4c:
    // 0x33ad4c: 0x0  nop
    ctx->pc = 0x33ad4cu;
    // NOP
label_33ad50:
    // 0x33ad50: 0x5062fffb  beql        $v1, $v0, . + 4 + (-0x5 << 2)
label_33ad54:
    if (ctx->pc == 0x33AD54u) {
        ctx->pc = 0x33AD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AD50u;
        // 0x33ad54: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AD58u;
        goto label_33ad58;
    }
    ctx->pc = 0x33AD50u;
    {
        const bool branch_taken_0x33ad50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33ad50) {
            ctx->pc = 0x33AD54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33AD50u;
            // 0x33ad54: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33AD40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33ad40;
        }
    }
    ctx->pc = 0x33AD58u;
label_33ad58:
    // 0x33ad58: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x33ad58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_33ad5c:
    // 0x33ad5c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x33ad5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_33ad60:
    // 0x33ad60: 0x54640001  bnel        $v1, $a0, . + 4 + (0x1 << 2)
label_33ad64:
    if (ctx->pc == 0x33AD64u) {
        ctx->pc = 0x33AD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AD60u;
        // 0x33ad64: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AD68u;
        goto label_33ad68;
    }
    ctx->pc = 0x33AD60u;
    {
        const bool branch_taken_0x33ad60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x33ad60) {
            ctx->pc = 0x33AD64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33AD60u;
            // 0x33ad64: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33AD68u;
            goto label_33ad68;
        }
    }
    ctx->pc = 0x33AD68u;
label_33ad68:
    // 0x33ad68: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x33ad68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_33ad6c:
    // 0x33ad6c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x33ad6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_33ad70:
    // 0x33ad70: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x33ad70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_33ad74:
    // 0x33ad74: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x33ad74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_33ad78:
    // 0x33ad78: 0x1483ffc1  bne         $a0, $v1, . + 4 + (-0x3F << 2)
label_33ad7c:
    if (ctx->pc == 0x33AD7Cu) {
        ctx->pc = 0x33AD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AD78u;
        // 0x33ad7c: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AD80u;
        goto label_33ad80;
    }
    ctx->pc = 0x33AD78u;
    {
        const bool branch_taken_0x33ad78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x33AD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AD78u;
        // 0x33ad7c: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ad78) {
            ctx->pc = 0x33AC80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33ac80;
        }
    }
    ctx->pc = 0x33AD80u;
label_33ad80:
    // 0x33ad80: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x33ad80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_33ad84:
    // 0x33ad84: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x33ad84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_33ad88:
    // 0x33ad88: 0xd13823  subu        $a3, $a2, $s1
    ctx->pc = 0x33ad88u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
label_33ad8c:
    // 0x33ad8c: 0x2ce20080  sltiu       $v0, $a3, 0x80
    ctx->pc = 0x33ad8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
label_33ad90:
    // 0x33ad90: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_33ad94:
    if (ctx->pc == 0x33AD94u) {
        ctx->pc = 0x33AD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AD90u;
        // 0x33ad94: 0x287a021  addu        $s4, $s4, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AD98u;
        goto label_33ad98;
    }
    ctx->pc = 0x33AD90u;
    {
        const bool branch_taken_0x33ad90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33AD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AD90u;
        // 0x33ad94: 0x287a021  addu        $s4, $s4, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ad90) {
            ctx->pc = 0x33ADB0u;
            goto label_33adb0;
        }
    }
    ctx->pc = 0x33AD98u;
label_33ad98:
    // 0x33ad98: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x33ad98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_33ad9c:
    // 0x33ad9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33ad9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33ada0:
    // 0x33ada0: 0x24846f40  addiu       $a0, $a0, 0x6F40
    ctx->pc = 0x33ada0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28480));
label_33ada4:
    // 0x33ada4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x33ada4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_33ada8:
    // 0x33ada8: 0xc0ceaca  jal         func_33AB28
label_33adac:
    if (ctx->pc == 0x33ADACu) {
        ctx->pc = 0x33ADACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ADA8u;
        // 0x33adac: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33ADB0u;
        goto label_33adb0;
    }
    ctx->pc = 0x33ADA8u;
    SET_GPR_U32(ctx, 31, 0x33ADB0u);
    ctx->pc = 0x33ADACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33ADA8u;
    // 0x33adac: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AB28u, 0x33ADA8u, 0x33ADB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33ADB0u;
label_33adb0:
    // 0x33adb0: 0x27d16f20  addiu       $s1, $fp, 0x6F20
    ctx->pc = 0x33adb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 28448));
label_33adb4:
    // 0x33adb4: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x33adb4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
label_33adb8:
    // 0x33adb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33adb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33adbc:
    // 0x33adbc: 0xc0ceaca  jal         func_33AB28
label_33adc0:
    if (ctx->pc == 0x33ADC0u) {
        ctx->pc = 0x33ADC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ADBCu;
        // 0x33adc0: 0x26106f98  addiu       $s0, $s0, 0x6F98 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28568));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33ADC4u;
        goto label_33adc4;
    }
    ctx->pc = 0x33ADBCu;
    SET_GPR_U32(ctx, 31, 0x33ADC4u);
    ctx->pc = 0x33ADC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33ADBCu;
    // 0x33adc0: 0x26106f98  addiu       $s0, $s0, 0x6F98 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AB28u, 0x33ADBCu, 0x33ADC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33ADC4u;
label_33adc4:
    // 0x33adc4: 0x8ee727e4  lw          $a3, 0x27E4($s7)
    ctx->pc = 0x33adc4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 10212)));
label_33adc8:
    // 0x33adc8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x33adc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_33adcc:
    // 0x33adcc: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x33adccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_33add0:
    // 0x33add0: 0x8fa60034  lw          $a2, 0x34($sp)
    ctx->pc = 0x33add0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_33add4:
    // 0x33add4: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x33add4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_33add8:
    // 0x33add8: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x33add8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_33addc:
    // 0x33addc: 0x40f809  jalr        $v0
label_33ade0:
    if (ctx->pc == 0x33ADE0u) {
        ctx->pc = 0x33ADE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ADDCu;
        // 0x33ade0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33ADE4u;
        goto label_33ade4;
    }
    ctx->pc = 0x33ADDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33ADE4u);
        ctx->pc = 0x33ADE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ADDCu;
        // 0x33ade0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33ADDCu, 0x33ADE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33ADE4u;
label_33ade4:
    // 0x33ade4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x33ade4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33ade8:
    // 0x33ade8: 0xc0ceaca  jal         func_33AB28
label_33adec:
    if (ctx->pc == 0x33ADECu) {
        ctx->pc = 0x33ADECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ADE8u;
        // 0x33adec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33ADF0u;
        goto label_33adf0;
    }
    ctx->pc = 0x33ADE8u;
    SET_GPR_U32(ctx, 31, 0x33ADF0u);
    ctx->pc = 0x33ADECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33ADE8u;
    // 0x33adec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AB28u, 0x33ADE8u, 0x33ADF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33ADF0u;
label_33adf0:
    // 0x33adf0: 0xc0ceaca  jal         func_33AB28
label_33adf4:
    if (ctx->pc == 0x33ADF4u) {
        ctx->pc = 0x33ADF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ADF0u;
        // 0x33adf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33ADF8u;
        goto label_33adf8;
    }
    ctx->pc = 0x33ADF0u;
    SET_GPR_U32(ctx, 31, 0x33ADF8u);
    ctx->pc = 0x33ADF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33ADF0u;
    // 0x33adf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AB28u, 0x33ADF0u, 0x33ADF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33ADF8u;
label_33adf8:
    // 0x33adf8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x33adf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_33adfc:
    // 0x33adfc: 0xc1106e8  jal         func_441BA0
label_33ae00:
    if (ctx->pc == 0x33AE00u) {
        ctx->pc = 0x33AE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ADFCu;
        // 0x33ae00: 0x8c4427ec  lw          $a0, 0x27EC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AE04u;
        goto label_33ae04;
    }
    ctx->pc = 0x33ADFCu;
    SET_GPR_U32(ctx, 31, 0x33AE04u);
    ctx->pc = 0x33AE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33ADFCu;
    // 0x33ae00: 0x8c4427ec  lw          $a0, 0x27EC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x441BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x441BA0u, 0x33ADFCu, 0x33AE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AE04u;
label_33ae04:
    // 0x33ae04: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x33ae04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_33ae08:
    // 0x33ae08: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x33ae08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_33ae0c:
    // 0x33ae0c: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x33ae0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_33ae10:
    // 0x33ae10: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x33ae10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_33ae14:
    // 0x33ae14: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x33ae14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_33ae18:
    // 0x33ae18: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x33ae18u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_33ae1c:
    // 0x33ae1c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x33ae1cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_33ae20:
    // 0x33ae20: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x33ae20u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_33ae24:
    // 0x33ae24: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x33ae24u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_33ae28:
    // 0x33ae28: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x33ae28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_33ae2c:
    // 0x33ae2c: 0x3e00008  jr          $ra
label_33ae30:
    if (ctx->pc == 0x33AE30u) {
        ctx->pc = 0x33AE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AE2Cu;
        // 0x33ae30: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AE34u;
        goto label_33ae34;
    }
    ctx->pc = 0x33AE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33AE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AE2Cu;
        // 0x33ae30: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33AE2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33AE34u;
label_33ae34:
    // 0x33ae34: 0x0  nop
    ctx->pc = 0x33ae34u;
    // NOP
    ctx->pc = 0x33ae38u;
}
