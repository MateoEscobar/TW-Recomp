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

// Function: sub_00153DE0
// Address: 0x153de0 - 0x153f60
void sub_00153DE0_0x153de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153DE0_0x153de0");
#endif

    ctx->pc = 0x153de0u;

    // 0x153de0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x153de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x153de4: 0x3c0c2000  lui         $t4, 0x2000
    ctx->pc = 0x153de4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)8192 << 16));
    // 0x153de8: 0x24425240  addiu       $v0, $v0, 0x5240
    ctx->pc = 0x153de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21056));
    // 0x153dec: 0x240d0009  addiu       $t5, $zero, 0x9
    ctx->pc = 0x153decu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x153df0: 0x4c7025  or          $t6, $v0, $t4
    ctx->pc = 0x153df0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
    // 0x153df4: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x153df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x153df8: 0xa1c30003  sb          $v1, 0x3($t6)
    ctx->pc = 0x153df8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x205E5243u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x205E5243u, _value); } while (0);
    // 0x153dfc: 0x3402845a  ori         $v0, $zero, 0x845A
    ctx->pc = 0x153dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33882);
    // 0x153e00: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x153e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x153e04: 0x34428008  ori         $v0, $v0, 0x8008
    ctx->pc = 0x153e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32776);
    // 0x153e08: 0xa5cd0000  sh          $t5, 0x0($t6)
    ctx->pc = 0x153e08u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 0), (uint16_t)GPR_U32(ctx, 13));
    // 0x153e0c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x153e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x153e10: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x153e10u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x153e14: 0x3c0c005e  lui         $t4, 0x5E
    ctx->pc = 0x153e14u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)94 << 16));
    // 0x153e18: 0xfdc30008  sd          $v1, 0x8($t6)
    ctx->pc = 0x153e18u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 8), GPR_U64(ctx, 3));
    // 0x153e1c: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x153e1cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153e20: 0xfdc20000  sd          $v0, 0x0($t6)
    ctx->pc = 0x153e20u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 0), GPR_U64(ctx, 2));
    // 0x153e24: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x153e24u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153e28: 0x8d835200  lw          $v1, 0x5200($t4)
    ctx->pc = 0x153e28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E5200u));
    // 0x153e2c: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x153e2cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x153e30: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x153e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x153e34: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x153E34u;
    {
        const bool branch_taken_0x153e34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x153E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153E34u;
        // 0x153e38: 0xc0602d  daddu       $t4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153e34) {
            ctx->pc = 0x153E6Cu;
            goto label_153e6c;
        }
    }
    ctx->pc = 0x153E3Cu;
    // 0x153e3c: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x153e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
    // 0x153e40: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x153e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x153e44: 0x84a35208  lh          $v1, 0x5208($a1)
    ctx->pc = 0x153e44u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x5E5208u));
    // 0x153e48: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x153e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x153e4c: 0xfdc20008  sd          $v0, 0x8($t6)
    ctx->pc = 0x153e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 8), GPR_U64(ctx, 2));
    // 0x153e50: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x153e50u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x153e54: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x153e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x153e58: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x153e58u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x153e5c: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x153e5cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x153e60: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x153e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x153e64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x153E64u;
    {
        const bool branch_taken_0x153e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153E64u;
        // 0x153e68: 0xfdc20000  sd          $v0, 0x0($t6) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 14), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153e64) {
            ctx->pc = 0x153E74u;
            goto label_153e74;
        }
    }
    ctx->pc = 0x153E6Cu;
label_153e6c:
    // 0x153e6c: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x153e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x153e70: 0xfdc20008  sd          $v0, 0x8($t6)
    ctx->pc = 0x153e70u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 8), GPR_U64(ctx, 2));
label_153e74:
    // 0x153e74: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x153e74u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x153e78: 0xa103c  dsll32      $v0, $t2, 0
    ctx->pc = 0x153e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
    // 0x153e7c: 0x3404aa80  ori         $a0, $zero, 0xAA80
    ctx->pc = 0x153e7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43648);
    // 0x153e80: 0x42538  dsll        $a0, $a0, 20
    ctx->pc = 0x153e80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 20);
    // 0x153e84: 0x214ba  dsrl        $v0, $v0, 18
    ctx->pc = 0x153e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 18);
    // 0x153e88: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x153e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x153e8c: 0x1621025  or          $v0, $t3, $v0
    ctx->pc = 0x153e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x153e90: 0xfdc30008  sd          $v1, 0x8($t6)
    ctx->pc = 0x153e90u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 8), GPR_U64(ctx, 3));
    // 0x153e94: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x153e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x153e98: 0x24030061  addiu       $v1, $zero, 0x61
    ctx->pc = 0x153e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x153e9c: 0xfdc20000  sd          $v0, 0x0($t6)
    ctx->pc = 0x153e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 0), GPR_U64(ctx, 2));
    // 0x153ea0: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x153ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x153ea4: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x153ea4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x153ea8: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x153ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x153eac: 0xfdc30000  sd          $v1, 0x0($t6)
    ctx->pc = 0x153eacu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 0), GPR_U64(ctx, 3));
    // 0x153eb0: 0x82100  sll         $a0, $t0, 4
    ctx->pc = 0x153eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x153eb4: 0xfdc60008  sd          $a2, 0x8($t6)
    ctx->pc = 0x153eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 8), GPR_U64(ctx, 6));
    // 0x153eb8: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x153eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x153ebc: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x153ebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x153ec0: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x153ec0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x153ec4: 0xf303c  dsll32      $a2, $t7, 0
    ctx->pc = 0x153ec4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 15) << (32 + 0));
    // 0x153ec8: 0xfdc20008  sd          $v0, 0x8($t6)
    ctx->pc = 0x153ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 8), GPR_U64(ctx, 2));
    // 0x153ecc: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x153eccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x153ed0: 0xfdc00000  sd          $zero, 0x0($t6)
    ctx->pc = 0x153ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 0), GPR_U64(ctx, 0));
    // 0x153ed4: 0xd103c  dsll32      $v0, $t5, 0
    ctx->pc = 0x153ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) << (32 + 0));
    // 0x153ed8: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x153ed8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x153edc: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x153edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
    // 0x153ee0: 0xfdc30000  sd          $v1, 0x0($t6)
    ctx->pc = 0x153ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 0), GPR_U64(ctx, 3));
    // 0x153ee4: 0x92900  sll         $a1, $t1, 4
    ctx->pc = 0x153ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x153ee8: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x153ee8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x153eec: 0xfdc80008  sd          $t0, 0x8($t6)
    ctx->pc = 0x153eecu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 8), GPR_U64(ctx, 8));
    // 0x153ef0: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x153ef0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x153ef4: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x153ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x153ef8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x153ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x153efc: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x153efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x153f00: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x153f00u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x153f04: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x153f04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x153f08: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x153f08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x153f0c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x153f0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x153f10: 0xc1100  sll         $v0, $t4, 4
    ctx->pc = 0x153f10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x153f14: 0xfdc60000  sd          $a2, 0x0($t6)
    ctx->pc = 0x153f14u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 0), GPR_U64(ctx, 6));
    // 0x153f18: 0xfdc70008  sd          $a3, 0x8($t6)
    ctx->pc = 0x153f18u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 8), GPR_U64(ctx, 7));
    // 0x153f1c: 0x1e21021  addu        $v0, $t7, $v0
    ctx->pc = 0x153f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x153f20: 0x1a31821  addu        $v1, $t5, $v1
    ctx->pc = 0x153f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x153f24: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x153f24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x153f28: 0x52c3a  dsrl        $a1, $a1, 16
    ctx->pc = 0x153f28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 16);
    // 0x153f2c: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x153f2cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x153f30: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x153f30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x153f34: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x153f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x153f38: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x153f38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x153f3c: 0xfdc40000  sd          $a0, 0x0($t6)
    ctx->pc = 0x153f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 0), GPR_U64(ctx, 4));
    // 0x153f40: 0xfdc80008  sd          $t0, 0x8($t6)
    ctx->pc = 0x153f40u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 8), GPR_U64(ctx, 8));
    // 0x153f44: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x153f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x153f48: 0x31c3a  dsrl        $v1, $v1, 16
    ctx->pc = 0x153f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 16);
    // 0x153f4c: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x153f4cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x153f50: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x153f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x153f54: 0xfdc70008  sd          $a3, 0x8($t6)
    ctx->pc = 0x153f54u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 8), GPR_U64(ctx, 7));
    // 0x153f58: 0x3e00008  jr          $ra
    ctx->pc = 0x153F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153F58u;
        // 0x153f5c: 0xfdc20000  sd          $v0, 0x0($t6) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 14), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153F58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153F60u;
}
