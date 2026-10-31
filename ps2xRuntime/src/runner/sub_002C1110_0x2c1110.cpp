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

// Function: sub_002C1110
// Address: 0x2c1110 - 0x2c11d8
void sub_002C1110_0x2c1110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1110_0x2c1110");
#endif

    switch (ctx->pc) {
        case 0x2c1160u: goto label_2c1160;
        default: break;
    }

    ctx->pc = 0x2c1110u;

    // 0x2c1110: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c1110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c1114: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c1114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c1118: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c1118u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c111c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2c111cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2c1120: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c1120u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1124: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2c1124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2c1128: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c1128u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c112c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2c112cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2c1130: 0xa8c00  sll         $s1, $t2, 16
    ctx->pc = 0x2c1130u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x2c1134: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2c1134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2c1138: 0xb9400  sll         $s2, $t3, 16
    ctx->pc = 0x2c1138u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x2c113c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2c113cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2c1140: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2c1140u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1144: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2c1144u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1148: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c1148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c114c: 0x118c03  sra         $s1, $s1, 16
    ctx->pc = 0x2c114cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 16));
    // 0x2c1150: 0x129403  sra         $s2, $s2, 16
    ctx->pc = 0x2c1150u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 16));
    // 0x2c1154: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x2c1154u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c1158: 0xc0b81d2  jal         func_2E0748
    ctx->pc = 0x2C1158u;
    SET_GPR_U32(ctx, 31, 0x2C1160u);
    ctx->pc = 0x2C115Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1158u;
    // 0x2c115c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0748u, 0x2C1158u, 0x2C1160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1160u;
label_2c1160:
    // 0x2c1160: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2c1160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2c1164: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2c1164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c1168: 0x24630b70  addiu       $v1, $v1, 0xB70
    ctx->pc = 0x2c1168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2928));
    // 0x2c116c: 0xa6110048  sh          $s1, 0x48($s0)
    ctx->pc = 0x2c116cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 72), (uint16_t)GPR_U32(ctx, 17));
    // 0x2c1170: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2c1170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x2c1174: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2c1174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c1178: 0xa612004a  sh          $s2, 0x4A($s0)
    ctx->pc = 0x2c1178u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 74), (uint16_t)GPR_U32(ctx, 18));
    // 0x2c117c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2c117cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c1180: 0xaca2021c  sw          $v0, 0x21C($a1)
    ctx->pc = 0x2c1180u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 540), GPR_U32(ctx, 2));
    // 0x2c1184: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2c1184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c1188: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c1188u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c118c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c118cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c1190: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2c1190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c1194: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2c1194u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c1198: 0xac640220  sw          $a0, 0x220($v1)
    ctx->pc = 0x2c1198u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 544), GPR_U32(ctx, 4));
    // 0x2c119c: 0xae130034  sw          $s3, 0x34($s0)
    ctx->pc = 0x2c119cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 19));
    // 0x2c11a0: 0xae14003c  sw          $s4, 0x3C($s0)
    ctx->pc = 0x2c11a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 20));
    // 0x2c11a4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2c11a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c11a8: 0xae060040  sw          $a2, 0x40($s0)
    ctx->pc = 0x2c11a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 6));
    // 0x2c11ac: 0xa600004c  sh          $zero, 0x4C($s0)
    ctx->pc = 0x2c11acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 76), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c11b0: 0xa200004e  sb          $zero, 0x4E($s0)
    ctx->pc = 0x2c11b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 78), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c11b4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2c11b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c11b8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2c11b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c11bc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2c11bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c11c0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2c11c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c11c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c11c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c11c8: 0xa065028d  sb          $a1, 0x28D($v1)
    ctx->pc = 0x2c11c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 653), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c11cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C11CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C11D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C11CCu;
        // 0x2c11d0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C11CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C11D4u;
    // 0x2c11d4: 0x0  nop
    ctx->pc = 0x2c11d4u;
    // NOP
    ctx->pc = 0x2c11d8u;
}
