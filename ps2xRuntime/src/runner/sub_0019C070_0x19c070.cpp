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

// Function: sub_0019C070
// Address: 0x19c070 - 0x19c1d0
void sub_0019C070_0x19c070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C070_0x19c070");
#endif

    switch (ctx->pc) {
        case 0x19c070u: goto label_19c070;
        case 0x19c074u: goto label_19c074;
        case 0x19c078u: goto label_19c078;
        case 0x19c07cu: goto label_19c07c;
        case 0x19c080u: goto label_19c080;
        case 0x19c084u: goto label_19c084;
        case 0x19c088u: goto label_19c088;
        case 0x19c08cu: goto label_19c08c;
        case 0x19c090u: goto label_19c090;
        case 0x19c094u: goto label_19c094;
        case 0x19c098u: goto label_19c098;
        case 0x19c09cu: goto label_19c09c;
        case 0x19c0a0u: goto label_19c0a0;
        case 0x19c0a4u: goto label_19c0a4;
        case 0x19c0a8u: goto label_19c0a8;
        case 0x19c0acu: goto label_19c0ac;
        case 0x19c0b0u: goto label_19c0b0;
        case 0x19c0b4u: goto label_19c0b4;
        case 0x19c0b8u: goto label_19c0b8;
        case 0x19c0bcu: goto label_19c0bc;
        case 0x19c0c0u: goto label_19c0c0;
        case 0x19c0c4u: goto label_19c0c4;
        case 0x19c0c8u: goto label_19c0c8;
        case 0x19c0ccu: goto label_19c0cc;
        case 0x19c0d0u: goto label_19c0d0;
        case 0x19c0d4u: goto label_19c0d4;
        case 0x19c0d8u: goto label_19c0d8;
        case 0x19c0dcu: goto label_19c0dc;
        case 0x19c0e0u: goto label_19c0e0;
        case 0x19c0e4u: goto label_19c0e4;
        case 0x19c0e8u: goto label_19c0e8;
        case 0x19c0ecu: goto label_19c0ec;
        case 0x19c0f0u: goto label_19c0f0;
        case 0x19c0f4u: goto label_19c0f4;
        case 0x19c0f8u: goto label_19c0f8;
        case 0x19c0fcu: goto label_19c0fc;
        case 0x19c100u: goto label_19c100;
        case 0x19c104u: goto label_19c104;
        case 0x19c108u: goto label_19c108;
        case 0x19c10cu: goto label_19c10c;
        case 0x19c110u: goto label_19c110;
        case 0x19c114u: goto label_19c114;
        case 0x19c118u: goto label_19c118;
        case 0x19c11cu: goto label_19c11c;
        case 0x19c120u: goto label_19c120;
        case 0x19c124u: goto label_19c124;
        case 0x19c128u: goto label_19c128;
        case 0x19c12cu: goto label_19c12c;
        case 0x19c130u: goto label_19c130;
        case 0x19c134u: goto label_19c134;
        case 0x19c138u: goto label_19c138;
        case 0x19c13cu: goto label_19c13c;
        case 0x19c140u: goto label_19c140;
        case 0x19c144u: goto label_19c144;
        case 0x19c148u: goto label_19c148;
        case 0x19c14cu: goto label_19c14c;
        case 0x19c150u: goto label_19c150;
        case 0x19c154u: goto label_19c154;
        case 0x19c158u: goto label_19c158;
        case 0x19c15cu: goto label_19c15c;
        case 0x19c160u: goto label_19c160;
        case 0x19c164u: goto label_19c164;
        case 0x19c168u: goto label_19c168;
        case 0x19c16cu: goto label_19c16c;
        case 0x19c170u: goto label_19c170;
        case 0x19c174u: goto label_19c174;
        case 0x19c178u: goto label_19c178;
        case 0x19c17cu: goto label_19c17c;
        case 0x19c180u: goto label_19c180;
        case 0x19c184u: goto label_19c184;
        case 0x19c188u: goto label_19c188;
        case 0x19c18cu: goto label_19c18c;
        case 0x19c190u: goto label_19c190;
        case 0x19c194u: goto label_19c194;
        case 0x19c198u: goto label_19c198;
        case 0x19c19cu: goto label_19c19c;
        case 0x19c1a0u: goto label_19c1a0;
        case 0x19c1a4u: goto label_19c1a4;
        case 0x19c1a8u: goto label_19c1a8;
        case 0x19c1acu: goto label_19c1ac;
        case 0x19c1b0u: goto label_19c1b0;
        case 0x19c1b4u: goto label_19c1b4;
        case 0x19c1b8u: goto label_19c1b8;
        case 0x19c1bcu: goto label_19c1bc;
        case 0x19c1c0u: goto label_19c1c0;
        case 0x19c1c4u: goto label_19c1c4;
        case 0x19c1c8u: goto label_19c1c8;
        case 0x19c1ccu: goto label_19c1cc;
        default: break;
    }

    ctx->pc = 0x19c070u;

label_19c070:
    // 0x19c070: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x19c070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_19c074:
    // 0x19c074: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x19c074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_19c078:
    // 0x19c078: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x19c078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_19c07c:
    // 0x19c07c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x19c07cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_19c080:
    // 0x19c080: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x19c080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_19c084:
    // 0x19c084: 0x24910004  addiu       $s1, $a0, 0x4
    ctx->pc = 0x19c084u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_19c088:
    // 0x19c088: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x19c088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_19c08c:
    // 0x19c08c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x19c08cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c090:
    // 0x19c090: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x19c090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_19c094:
    // 0x19c094: 0x3c130055  lui         $s3, 0x55
    ctx->pc = 0x19c094u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)85 << 16));
label_19c098:
    // 0x19c098: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x19c098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_19c09c:
    // 0x19c09c: 0x3c140055  lui         $s4, 0x55
    ctx->pc = 0x19c09cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)85 << 16));
label_19c0a0:
    // 0x19c0a0: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x19c0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_19c0a4:
    // 0x19c0a4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x19c0a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19c0a8:
    // 0x19c0a8: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x19c0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_19c0ac:
    // 0x19c0ac: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x19c0acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19c0b0:
    // 0x19c0b0: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x19c0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_19c0b4:
    // 0x19c0b4: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x19c0b4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_19c0b8:
    // 0x19c0b8: 0xe7b600b0  swc1        $f22, 0xB0($sp)
    ctx->pc = 0x19c0b8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_19c0bc:
    // 0x19c0bc: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x19c0bcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19c0c0:
    // 0x19c0c0: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x19c0c0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_19c0c4:
    // 0x19c0c4: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x19c0c4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
label_19c0c8:
    // 0x19c0c8: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x19c0c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_19c0cc:
    // 0x19c0cc: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x19c0ccu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
label_19c0d0:
    // 0x19c0d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19c0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_19c0d4:
    // 0x19c0d4: 0x10000024  b           . + 4 + (0x24 << 2)
label_19c0d8:
    if (ctx->pc == 0x19C0D8u) {
        ctx->pc = 0x19C0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C0D4u;
        // 0x19c0d8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C0DCu;
        goto label_19c0dc;
    }
    ctx->pc = 0x19C0D4u;
    {
        const bool branch_taken_0x19c0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C0D4u;
        // 0x19c0d8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c0d4) {
            ctx->pc = 0x19C168u;
            goto label_19c168;
        }
    }
    ctx->pc = 0x19C0DCu;
label_19c0dc:
    // 0x19c0dc: 0x0  nop
    ctx->pc = 0x19c0dcu;
    // NOP
label_19c0e0:
    // 0x19c0e0: 0x26653a08  addiu       $a1, $s3, 0x3A08
    ctx->pc = 0x19c0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 14856));
label_19c0e4:
    // 0x19c0e4: 0x268839d0  addiu       $t0, $s4, 0x39D0
    ctx->pc = 0x19c0e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 14800));
label_19c0e8:
    // 0x19c0e8: 0x24063310  addiu       $a2, $zero, 0x3310
    ctx->pc = 0x19c0e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13072));
label_19c0ec:
    // 0x19c0ec: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x19c0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_19c0f0:
    // 0x19c0f0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x19c0f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_19c0f4:
    // 0x19c0f4: 0x24090055  addiu       $t1, $zero, 0x55
    ctx->pc = 0x19c0f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
label_19c0f8:
    // 0x19c0f8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x19c0f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c0fc:
    // 0x19c0fc: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x19c0fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_19c100:
    // 0x19c100: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x19c100u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c104:
    // 0x19c104: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x19c104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_19c108:
    // 0x19c108: 0x40f809  jalr        $v0
label_19c10c:
    if (ctx->pc == 0x19C10Cu) {
        ctx->pc = 0x19C10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C108u;
        // 0x19c10c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C110u;
        goto label_19c110;
    }
    ctx->pc = 0x19C108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19C110u);
        ctx->pc = 0x19C10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C108u;
        // 0x19c10c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C108u, 0x19C110u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19C110u;
label_19c110:
    // 0x19c110: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19c110u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19c114:
    // 0x19c114: 0x52000005  beql        $s0, $zero, . + 4 + (0x5 << 2)
label_19c118:
    if (ctx->pc == 0x19C118u) {
        ctx->pc = 0x19C118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C114u;
        // 0x19c118: 0x8e02330c  lw          $v0, 0x330C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13068)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C11Cu;
        goto label_19c11c;
    }
    ctx->pc = 0x19C114u;
    {
        const bool branch_taken_0x19c114 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c114) {
            ctx->pc = 0x19C118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19C114u;
            // 0x19c118: 0x8e02330c  lw          $v0, 0x330C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13068)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19C12Cu;
            goto label_19c12c;
        }
    }
    ctx->pc = 0x19C11Cu;
label_19c11c:
    // 0x19c11c: 0xc06717a  jal         func_19C5E8
label_19c120:
    if (ctx->pc == 0x19C120u) {
        ctx->pc = 0x19C120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C11Cu;
        // 0x19c120: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C124u;
        goto label_19c124;
    }
    ctx->pc = 0x19C11Cu;
    SET_GPR_U32(ctx, 31, 0x19C124u);
    ctx->pc = 0x19C120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C11Cu;
    // 0x19c120: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C5E8u, 0x19C11Cu, 0x19C124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C124u;
label_19c124:
    // 0x19c124: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19c124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19c128:
    // 0x19c128: 0x8e02330c  lw          $v0, 0x330C($s0)
    ctx->pc = 0x19c128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13068)));
label_19c12c:
    // 0x19c12c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x19c12cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19c130:
    // 0x19c130: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x19c130u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_19c134:
    // 0x19c134: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x19c134u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_19c138:
    // 0x19c138: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x19c138u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_19c13c:
    // 0x19c13c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x19c13cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_19c140:
    // 0x19c140: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x19c140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_19c144:
    // 0x19c144: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x19c144u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_19c148:
    // 0x19c148: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x19c148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_19c14c:
    // 0x19c14c: 0x60f809  jalr        $v1
label_19c150:
    if (ctx->pc == 0x19C150u) {
        ctx->pc = 0x19C150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C14Cu;
        // 0x19c150: 0x4600b386  mov.s       $f14, $f22 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C154u;
        goto label_19c154;
    }
    ctx->pc = 0x19C14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19C154u);
        ctx->pc = 0x19C150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C14Cu;
        // 0x19c150: 0x4600b386  mov.s       $f14, $f22 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C14Cu, 0x19C154u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19C154u;
label_19c154:
    // 0x19c154: 0xae3e0000  sw          $fp, 0x0($s1)
    ctx->pc = 0x19c154u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 30));
label_19c158:
    // 0x19c158: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x19c158u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19c15c:
    // 0x19c15c: 0x1000000d  b           . + 4 + (0xD << 2)
label_19c160:
    if (ctx->pc == 0x19C160u) {
        ctx->pc = 0x19C160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C15Cu;
        // 0x19c160: 0xae30fffc  sw          $s0, -0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294967292), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C164u;
        goto label_19c164;
    }
    ctx->pc = 0x19C15Cu;
    {
        const bool branch_taken_0x19c15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C15Cu;
        // 0x19c160: 0xae30fffc  sw          $s0, -0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294967292), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c15c) {
            ctx->pc = 0x19C194u;
            goto label_19c194;
        }
    }
    ctx->pc = 0x19C164u;
label_19c164:
    // 0x19c164: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x19c164u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_19c168:
    // 0x19c168: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x19c168u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_19c16c:
    // 0x19c16c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_19c170:
    if (ctx->pc == 0x19C170u) {
        ctx->pc = 0x19C170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C16Cu;
        // 0x19c170: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C174u;
        goto label_19c174;
    }
    ctx->pc = 0x19C16Cu;
    {
        const bool branch_taken_0x19c16c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C16Cu;
        // 0x19c170: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c16c) {
            ctx->pc = 0x19C194u;
            goto label_19c194;
        }
    }
    ctx->pc = 0x19C174u;
label_19c174:
    // 0x19c174: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x19c174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19c178:
    // 0x19c178: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
label_19c17c:
    if (ctx->pc == 0x19C17Cu) {
        ctx->pc = 0x19C17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C178u;
        // 0x19c17c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C180u;
        goto label_19c180;
    }
    ctx->pc = 0x19C178u;
    {
        const bool branch_taken_0x19c178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19c178) {
            ctx->pc = 0x19C17Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19C178u;
            // 0x19c17c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19C164u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19c164;
        }
    }
    ctx->pc = 0x19C180u;
label_19c180:
    // 0x19c180: 0xc06700c  jal         func_19C030
label_19c184:
    if (ctx->pc == 0x19C184u) {
        ctx->pc = 0x19C184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C180u;
        // 0x19c184: 0x24053310  addiu       $a1, $zero, 0x3310 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C188u;
        goto label_19c188;
    }
    ctx->pc = 0x19C180u;
    SET_GPR_U32(ctx, 31, 0x19C188u);
    ctx->pc = 0x19C184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C180u;
    // 0x19c184: 0x24053310  addiu       $a1, $zero, 0x3310 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C030u, 0x19C180u, 0x19C188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C188u;
label_19c188:
    // 0x19c188: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
label_19c18c:
    if (ctx->pc == 0x19C18Cu) {
        ctx->pc = 0x19C18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C188u;
        // 0x19c18c: 0x8e0c27e4  lw          $t4, 0x27E4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C190u;
        goto label_19c190;
    }
    ctx->pc = 0x19C188u;
    {
        const bool branch_taken_0x19c188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C188u;
        // 0x19c18c: 0x8e0c27e4  lw          $t4, 0x27E4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c188) {
            ctx->pc = 0x19C0E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19c0e0;
        }
    }
    ctx->pc = 0x19C190u;
label_19c190:
    // 0x19c190: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19c190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19c194:
    // 0x19c194: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x19c194u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_19c198:
    // 0x19c198: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x19c198u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_19c19c:
    // 0x19c19c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x19c19cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_19c1a0:
    // 0x19c1a0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x19c1a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_19c1a4:
    // 0x19c1a4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x19c1a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_19c1a8:
    // 0x19c1a8: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x19c1a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_19c1ac:
    // 0x19c1ac: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x19c1acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_19c1b0:
    // 0x19c1b0: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x19c1b0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_19c1b4:
    // 0x19c1b4: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x19c1b4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19c1b8:
    // 0x19c1b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19c1b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19c1bc:
    // 0x19c1bc: 0xc7b600b0  lwc1        $f22, 0xB0($sp)
    ctx->pc = 0x19c1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_19c1c0:
    // 0x19c1c0: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x19c1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_19c1c4:
    // 0x19c1c4: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x19c1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_19c1c8:
    // 0x19c1c8: 0x3e00008  jr          $ra
label_19c1cc:
    if (ctx->pc == 0x19C1CCu) {
        ctx->pc = 0x19C1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C1C8u;
        // 0x19c1cc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C1D0u;
        goto label_fallthrough_0x19c1c8;
    }
    ctx->pc = 0x19C1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C1C8u;
        // 0x19c1cc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C1C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19c1c8:
    ctx->pc = 0x19C1D0u;
}
