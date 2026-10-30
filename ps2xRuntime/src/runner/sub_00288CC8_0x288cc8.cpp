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

// Function: sub_00288CC8
// Address: 0x288cc8 - 0x288f40
void sub_00288CC8_0x288cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288CC8_0x288cc8");
#endif

    switch (ctx->pc) {
        case 0x288d38u: goto label_288d38;
        case 0x288d48u: goto label_288d48;
        case 0x288d7cu: goto label_288d7c;
        case 0x288dc4u: goto label_288dc4;
        case 0x288df0u: goto label_288df0;
        case 0x288e0cu: goto label_288e0c;
        case 0x288e30u: goto label_288e30;
        case 0x288e4cu: goto label_288e4c;
        case 0x288e98u: goto label_288e98;
        case 0x288eb8u: goto label_288eb8;
        default: break;
    }

    ctx->pc = 0x288cc8u;

    // 0x288cc8: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x288cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x288ccc: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x288cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
    // 0x288cd0: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x288cd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
    // 0x288cd4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x288cd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x288cd8: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x288cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
    // 0x288cdc: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x288cdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288ce0: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x288ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
    // 0x288ce4: 0x140a82d  daddu       $s5, $t2, $zero
    ctx->pc = 0x288ce4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288ce8: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x288ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
    // 0x288cec: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x288cecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288cf0: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x288cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x288cf4: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x288cf4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288cf8: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x288cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x288cfc: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x288cfcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288d00: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x288d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x288d04: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x288d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x288d08: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x288d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x288d0c: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x288d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
    // 0x288d10: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x288d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x288d14: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x288d14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x288d18: 0xafa60064  sw          $a2, 0x64($sp)
    ctx->pc = 0x288d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 6));
    // 0x288d1c: 0xafa80068  sw          $t0, 0x68($sp)
    ctx->pc = 0x288d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 8));
    // 0x288d20: 0xafa9006c  sw          $t1, 0x6C($sp)
    ctx->pc = 0x288d20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 9));
    // 0x288d24: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x288d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x288d28: 0x10400076  beqz        $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x288D28u;
    {
        const bool branch_taken_0x288d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288D28u;
        // 0x288d2c: 0xafa00070  sw          $zero, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288d28) {
            ctx->pc = 0x288F04u;
            goto label_288f04;
        }
    }
    ctx->pc = 0x288D30u;
    // 0x288d30: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x288d30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288d34: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x288d34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_288d38:
    // 0x288d38: 0x8ee40020  lw          $a0, 0x20($s7)
    ctx->pc = 0x288d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 32)));
    // 0x288d3c: 0x8e910000  lw          $s1, 0x0($s4)
    ctx->pc = 0x288d3cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x288d40: 0xc0e409a  jal         func_390268
    ctx->pc = 0x288D40u;
    SET_GPR_U32(ctx, 31, 0x288D48u);
    ctx->pc = 0x288D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288D40u;
    // 0x288d44: 0x24840124  addiu       $a0, $a0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x288D40u, 0x288D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288D48u;
label_288d48:
    // 0x288d48: 0x10510067  beq         $v0, $s1, . + 4 + (0x67 << 2)
    ctx->pc = 0x288D48u;
    {
        const bool branch_taken_0x288d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x288D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288D48u;
        // 0x288d4c: 0x26300090  addiu       $s0, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288d48) {
            ctx->pc = 0x288EE8u;
            goto label_288ee8;
        }
    }
    ctx->pc = 0x288D50u;
    // 0x288d50: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x288d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x288d54: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x288d54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x288d58: 0x24524b00  addiu       $s2, $v0, 0x4B00
    ctx->pc = 0x288d58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x288d5c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x288d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x288d60: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x288d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288d64: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x288d64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x288d68: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x288d68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288d6c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x288d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x288d70: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x288d70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x288d74: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x288D74u;
    SET_GPR_U32(ctx, 31, 0x288D7Cu);
    ctx->pc = 0x288D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288D74u;
    // 0x288d78: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x288D74u, 0x288D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288D7Cu;
label_288d7c:
    // 0x288d7c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x288d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x288d80: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x288d80u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x288d84: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x288d84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x288d88: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x288d88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x288d8c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x288d8cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x288d90: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x288d90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x288d94: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x288d94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x288d98: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x288d98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x288d9c: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x288d9cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x288da0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x288da0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x288da4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x288da4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x288da8: 0x0  nop
    ctx->pc = 0x288da8u;
    // NOP
    // 0x288dac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x288dacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x288db0: 0x0  nop
    ctx->pc = 0x288db0u;
    // NOP
    // 0x288db4: 0x4501004c  bc1t        . + 4 + (0x4C << 2)
    ctx->pc = 0x288DB4u;
    {
        const bool branch_taken_0x288db4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x288DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288DB4u;
        // 0x288db8: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288db4) {
            ctx->pc = 0x288EE8u;
            goto label_288ee8;
        }
    }
    ctx->pc = 0x288DBCu;
    // 0x288dbc: 0xc087502  jal         func_21D408
    ctx->pc = 0x288DBCu;
    SET_GPR_U32(ctx, 31, 0x288DC4u);
    ctx->pc = 0x288DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288DBCu;
    // 0x288dc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x288DBCu, 0x288DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288DC4u;
label_288dc4:
    // 0x288dc4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x288dc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288dc8: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x288dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x288dcc: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x288DCCu;
    {
        const bool branch_taken_0x288dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288DCCu;
        // 0x288dd0: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288dcc) {
            ctx->pc = 0x288E1Cu;
            goto label_288e1c;
        }
    }
    ctx->pc = 0x288DD4u;
    // 0x288dd4: 0x86050002  lh          $a1, 0x2($s0)
    ctx->pc = 0x288dd4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x288dd8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x288dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288ddc: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x288ddcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288de0: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x288de0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x288de4: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x288de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x288de8: 0xc0cd8ec  jal         func_3363B0
    ctx->pc = 0x288DE8u;
    SET_GPR_U32(ctx, 31, 0x288DF0u);
    ctx->pc = 0x288DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288DE8u;
    // 0x288dec: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x288DE8u, 0x288DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288DF0u;
label_288df0:
    // 0x288df0: 0xc62001ac  lwc1        $f0, 0x1AC($s1)
    ctx->pc = 0x288df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288df4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x288df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x288df8: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x288df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x288dfc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x288dfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x288e00: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x288e00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288e04: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x288E04u;
    SET_GPR_U32(ctx, 31, 0x288E0Cu);
    ctx->pc = 0x288E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288E04u;
    // 0x288e08: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x288E04u, 0x288E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288E0Cu;
label_288e0c:
    // 0x288e0c: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x288e0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x288e10: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x288e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x288e14: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x288E14u;
    {
        const bool branch_taken_0x288e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288E14u;
        // 0x288e18: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288e14) {
            ctx->pc = 0x288E3Cu;
            goto label_288e3c;
        }
    }
    ctx->pc = 0x288E1Cu;
label_288e1c:
    // 0x288e1c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x288e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x288e20: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x288e20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x288e24: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x288e24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288e28: 0xc0a23d0  jal         func_288F40
    ctx->pc = 0x288E28u;
    SET_GPR_U32(ctx, 31, 0x288E30u);
    ctx->pc = 0x288E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288E28u;
    // 0x288e2c: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288F40u, 0x288E28u, 0x288E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288E30u;
label_288e30:
    // 0x288e30: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x288e30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x288e34: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x288e34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x288e38: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x288e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_288e3c:
    // 0x288e3c: 0x8fa5006c  lw          $a1, 0x6C($sp)
    ctx->pc = 0x288e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x288e40: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x288e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x288e44: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x288E44u;
    SET_GPR_U32(ctx, 31, 0x288E4Cu);
    ctx->pc = 0x288E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288E44u;
    // 0x288e48: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x288E44u, 0x288E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288E4Cu;
label_288e4c:
    // 0x288e4c: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x288e4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x288e50: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x288e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x288e54: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x288e54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x288e58: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x288e58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x288e5c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x288e5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x288e60: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x288e60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x288e64: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x288e64u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x288e68: 0x4a0003bf  vwaitq
    ctx->pc = 0x288e68u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x288e6c: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x288e6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x288e70: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x288e70u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x288e74: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x288e74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x288e78: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x288e78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x288e7c: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x288e7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x288e80: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x288e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x288e84: 0x0  nop
    ctx->pc = 0x288e84u;
    // NOP
    // 0x288e88: 0x0  nop
    ctx->pc = 0x288e88u;
    // NOP
    // 0x288e8c: 0x46146303  div.s       $f12, $f12, $f20
    ctx->pc = 0x288e8cu;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[20]); }
    // 0x288e90: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x288E90u;
    SET_GPR_U32(ctx, 31, 0x288E98u);
    ctx->pc = 0x288E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288E90u;
    // 0x288e94: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x288E90u, 0x288E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288E98u;
label_288e98:
    // 0x288e98: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x288e98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x288e9c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x288e9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288ea0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x288ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288ea4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x288ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288ea8: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x288ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x288eac: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x288eacu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x288eb0: 0xc0a275a  jal         func_289D68
    ctx->pc = 0x288EB0u;
    SET_GPR_U32(ctx, 31, 0x288EB8u);
    ctx->pc = 0x288EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288EB0u;
    // 0x288eb4: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289D68u, 0x288EB0u, 0x288EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288EB8u;
label_288eb8:
    // 0x288eb8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x288EB8u;
    {
        const bool branch_taken_0x288eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288EB8u;
        // 0x288ebc: 0xc7a00060  lwc1        $f0, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x288eb8) {
            ctx->pc = 0x288EE8u;
            goto label_288ee8;
        }
    }
    ctx->pc = 0x288EC0u;
    // 0x288ec0: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x288ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x288ec4: 0x0  nop
    ctx->pc = 0x288ec4u;
    // NOP
    // 0x288ec8: 0x0  nop
    ctx->pc = 0x288ec8u;
    // NOP
    // 0x288ecc: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x288eccu;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x288ed0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x288ed0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x288ed4: 0x0  nop
    ctx->pc = 0x288ed4u;
    // NOP
    // 0x288ed8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x288ED8u;
    {
        const bool branch_taken_0x288ed8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x288EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288ED8u;
        // 0x288edc: 0x8fa40070  lw          $a0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288ed8) {
            ctx->pc = 0x288EECu;
            goto label_288eec;
        }
    }
    ctx->pc = 0x288EE0u;
    // 0x288ee0: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x288ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x288ee4: 0x220f02d  daddu       $fp, $s1, $zero
    ctx->pc = 0x288ee4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_288ee8:
    // 0x288ee8: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x288ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_288eec:
    // 0x288eec: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x288eecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x288ef0: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x288ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x288ef4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x288ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x288ef8: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x288ef8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x288efc: 0x1440ff8e  bnez        $v0, . + 4 + (-0x72 << 2)
    ctx->pc = 0x288EFCu;
    {
        const bool branch_taken_0x288efc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288EFCu;
        // 0x288f00: 0xafa40070  sw          $a0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288efc) {
            ctx->pc = 0x288D38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_288d38;
        }
    }
    ctx->pc = 0x288F04u;
label_288f04:
    // 0x288f04: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x288f04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288f08: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x288f08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x288f0c: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x288f0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x288f10: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x288f10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x288f14: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x288f14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x288f18: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x288f18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x288f1c: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x288f1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x288f20: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x288f20u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x288f24: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x288f24u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x288f28: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x288f28u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x288f2c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x288f2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x288f30: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x288f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x288f34: 0x3e00008  jr          $ra
    ctx->pc = 0x288F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288F34u;
        // 0x288f38: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288F34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288F3Cu;
    // 0x288f3c: 0x0  nop
    ctx->pc = 0x288f3cu;
    // NOP
    ctx->pc = 0x288f40u;
}
