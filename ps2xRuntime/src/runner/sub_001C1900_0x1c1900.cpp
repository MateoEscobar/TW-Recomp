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

// Function: sub_001C1900
// Address: 0x1c1900 - 0x1c1ae0
void sub_001C1900_0x1c1900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1900_0x1c1900");
#endif

    switch (ctx->pc) {
        case 0x1c1968u: goto label_1c1968;
        case 0x1c1984u: goto label_1c1984;
        case 0x1c199cu: goto label_1c199c;
        case 0x1c19ccu: goto label_1c19cc;
        default: break;
    }

    ctx->pc = 0x1c1900u;

    // 0x1c1900: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1c1900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1c1904: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1c1904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1c1908: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1c1908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1c190c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c190cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1910: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1c1910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1c1914: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1c1914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1c1918: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1c1918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x1c191c: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x1c191cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x1c1920: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x1c1920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x1c1924: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c1924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c1928: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x1c1928u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1c192c: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x1c192cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1c1930: 0x8e2200c4  lw          $v0, 0xC4($s1)
    ctx->pc = 0x1c1930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x1c1934: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x1C1934u;
    {
        const bool branch_taken_0x1c1934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1934u;
        // 0x1c1938: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1934) {
            ctx->pc = 0x1C1AB0u;
            goto label_1c1ab0;
        }
    }
    ctx->pc = 0x1C193Cu;
    // 0x1c193c: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x1c193cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1c1940: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x1C1940u;
    {
        const bool branch_taken_0x1c1940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1940u;
        // 0x1c1944: 0xae2000c4  sw          $zero, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1940) {
            ctx->pc = 0x1C1AB0u;
            goto label_1c1ab0;
        }
    }
    ctx->pc = 0x1C1948u;
    // 0x1c1948: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1c1948u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1c194c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1c194cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1950: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c1950u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1954: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x1c1954u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x1c1958: 0x3c160055  lui         $s6, 0x55
    ctx->pc = 0x1c1958u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)85 << 16));
    // 0x1c195c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C195Cu;
    {
        const bool branch_taken_0x1c195c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C195Cu;
        // 0x1c1960: 0x263400a0  addiu       $s4, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c195c) {
            ctx->pc = 0x1C1974u;
            goto label_1c1974;
        }
    }
    ctx->pc = 0x1C1964u;
    // 0x1c1964: 0x0  nop
    ctx->pc = 0x1c1964u;
    // NOP
label_1c1968:
    // 0x1c1968: 0x38420020  xori        $v0, $v0, 0x20
    ctx->pc = 0x1c1968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)32);
    // 0x1c196c: 0x26720001  addiu       $s2, $s3, 0x1
    ctx->pc = 0x1c196cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1c1970: 0x262900b  movn        $s2, $s3, $v0
    ctx->pc = 0x1c1970u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 19));
label_1c1974:
    // 0x1c1974: 0x8e250040  lw          $a1, 0x40($s1)
    ctx->pc = 0x1c1974u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1c1978: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c1978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c197c: 0xc07061c  jal         func_1C1870
    ctx->pc = 0x1C197Cu;
    SET_GPR_U32(ctx, 31, 0x1C1984u);
    ctx->pc = 0x1C1980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C197Cu;
    // 0x1c1980: 0xb22821  addu        $a1, $a1, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1870u, 0x1C197Cu, 0x1C1984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1984u;
label_1c1984:
    // 0x1c1984: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x1c1984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1c1988: 0x529821  addu        $s3, $v0, $s2
    ctx->pc = 0x1c1988u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1c198c: 0x26c54eb8  addiu       $a1, $s6, 0x4EB8
    ctx->pc = 0x1c198cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 20152));
    // 0x1c1990: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1c1990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c1994: 0xc10c46c  jal         func_4311B0
    ctx->pc = 0x1C1994u;
    SET_GPR_U32(ctx, 31, 0x1C199Cu);
    ctx->pc = 0x1C1998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1994u;
    // 0x1c1998: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4311B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4311B0u, 0x1C1994u, 0x1C199Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C199Cu;
label_1c199c:
    // 0x1c199c: 0x2c500001  sltiu       $s0, $v0, 0x1
    ctx->pc = 0x1c199cu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1c19a0: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x1c19a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1c19a4: 0x26420004  addiu       $v0, $s2, 0x4
    ctx->pc = 0x1c19a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1c19a8: 0x8e2700b8  lw          $a3, 0xB8($s1)
    ctx->pc = 0x1c19a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x1c19ac: 0x50900b  movn        $s2, $v0, $s0
    ctx->pc = 0x1c19acu;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
    // 0x1c19b0: 0x8e2800bc  lw          $t0, 0xBC($s1)
    ctx->pc = 0x1c19b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x1c19b4: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1c19b4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1c19b8: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x1c19b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x1c19bc: 0x2722823  subu        $a1, $s3, $s2
    ctx->pc = 0x1c19bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x1c19c0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1c19c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c19c4: 0xc05e656  jal         func_179958
    ctx->pc = 0x1C19C4u;
    SET_GPR_U32(ctx, 31, 0x1C19CCu);
    ctx->pc = 0x1C19C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C19C4u;
    // 0x1c19c8: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x179958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179958u, 0x1C19C4u, 0x1C19CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C19CCu;
label_1c19cc:
    // 0x1c19cc: 0x1600000d  bnez        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C19CCu;
    {
        const bool branch_taken_0x1c19cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C19D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C19CCu;
        // 0x1c19d0: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c19cc) {
            ctx->pc = 0x1C1A04u;
            goto label_1c1a04;
        }
    }
    ctx->pc = 0x1C19D4u;
    // 0x1c19d4: 0x4602a040  add.s       $f1, $f20, $f2
    ctx->pc = 0x1c19d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
    // 0x1c19d8: 0xc620009c  lwc1        $f0, 0x9C($s1)
    ctx->pc = 0x1c19d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c19dc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c19dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c19e0: 0x0  nop
    ctx->pc = 0x1c19e0u;
    // NOP
    // 0x1c19e4: 0x45020012  bc1fl       . + 4 + (0x12 << 2)
    ctx->pc = 0x1C19E4u;
    {
        const bool branch_taken_0x1c19e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c19e4) {
            ctx->pc = 0x1C19E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C19E4u;
            // 0x1c19e8: 0x92220098  lbu         $v0, 0x98($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C1A30u;
            goto label_1c1a30;
        }
    }
    ctx->pc = 0x1C19ECu;
    // 0x1c19ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c19ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c19f0: 0x0  nop
    ctx->pc = 0x1c19f0u;
    // NOP
    // 0x1c19f4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1c19f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c19f8: 0x0  nop
    ctx->pc = 0x1c19f8u;
    // NOP
    // 0x1c19fc: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
    ctx->pc = 0x1C19FCu;
    {
        const bool branch_taken_0x1c19fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c19fc) {
            ctx->pc = 0x1C1A00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C19FCu;
            // 0x1c1a00: 0x92220098  lbu         $v0, 0x98($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C1A30u;
            goto label_1c1a30;
        }
    }
    ctx->pc = 0x1C1A04u;
label_1c1a04:
    // 0x1c1a04: 0x92230098  lbu         $v1, 0x98($s1)
    ctx->pc = 0x1c1a04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x1c1a08: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x1c1a08u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1a0c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1c1a0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1c1a10: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c1a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c1a14: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1c1a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c1a18: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x1c1a18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1c1a1c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1A1Cu;
    {
        const bool branch_taken_0x1c1a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1A1Cu;
        // 0x1c1a20: 0xa2230098  sb          $v1, 0x98($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 152), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1a1c) {
            ctx->pc = 0x1C1A2Cu;
            goto label_1c1a2c;
        }
    }
    ctx->pc = 0x1C1A24u;
    // 0x1c1a24: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1C1A24u;
    {
        const bool branch_taken_0x1c1a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1A24u;
        // 0x1c1a28: 0xa2200098  sb          $zero, 0x98($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 152), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1a24) {
            ctx->pc = 0x1C1AACu;
            goto label_1c1aac;
        }
    }
    ctx->pc = 0x1C1A2Cu;
label_1c1a2c:
    // 0x1c1a2c: 0x92220098  lbu         $v0, 0x98($s1)
    ctx->pc = 0x1c1a2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 152)));
label_1c1a30:
    // 0x1c1a30: 0x4602a500  add.s       $f20, $f20, $f2
    ctx->pc = 0x1c1a30u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
    // 0x1c1a34: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1c1a34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1c1a38: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1c1a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1c1a3c: 0xac550048  sw          $s5, 0x48($v0)
    ctx->pc = 0x1c1a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 21));
    // 0x1c1a40: 0x92230098  lbu         $v1, 0x98($s1)
    ctx->pc = 0x1c1a40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x1c1a44: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1c1a44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1c1a48: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1c1a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1c1a4c: 0xac73004c  sw          $s3, 0x4C($v1)
    ctx->pc = 0x1c1a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 19));
    // 0x1c1a50: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x1c1a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1c1a54: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1c1a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1c1a58: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1c1a58u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c1a5c: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x1C1A5Cu;
    {
        const bool branch_taken_0x1c1a5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1A5Cu;
        // 0x1c1a60: 0x4615a568  max.s       $f21, $f20, $f21 (Delay Slot)
        ctx->f[21] = std::max(ctx->f[20], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1a5c) {
            ctx->pc = 0x1C1968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1968;
        }
    }
    ctx->pc = 0x1C1A64u;
    // 0x1c1a64: 0x92220098  lbu         $v0, 0x98($s1)
    ctx->pc = 0x1c1a64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x1c1a68: 0x26230030  addiu       $v1, $s1, 0x30
    ctx->pc = 0x1c1a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1c1a6c: 0xc62100ac  lwc1        $f1, 0xAC($s1)
    ctx->pc = 0x1c1a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c1a70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c1a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c1a74: 0xc62000a4  lwc1        $f0, 0xA4($s1)
    ctx->pc = 0x1c1a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c1a78: 0xa2220098  sb          $v0, 0x98($s1)
    ctx->pc = 0x1c1a78u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 152), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c1a7c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c1a7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c1a80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c1a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c1a84: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c1a84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c1a88: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c1a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c1a8c: 0xe6350030  swc1        $f21, 0x30($s1)
    ctx->pc = 0x1c1a8cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x1c1a90: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c1a90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c1a94: 0x0  nop
    ctx->pc = 0x1c1a94u;
    // NOP
    // 0x1c1a98: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c1a98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c1a9c: 0xe462000c  swc1        $f2, 0xC($v1)
    ctx->pc = 0x1c1a9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1c1aa0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1c1aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1c1aa4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c1aa4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c1aa8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1c1aa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1c1aac:
    // 0x1c1aac: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1c1aacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1c1ab0:
    // 0x1c1ab0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1c1ab0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c1ab4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1c1ab4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c1ab8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1c1ab8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c1abc: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1c1abcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c1ac0: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x1c1ac0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c1ac4: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x1c1ac4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1ac8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c1ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1acc: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x1c1accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1c1ad0: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x1c1ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c1ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1AD4u;
        // 0x1c1ad8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1ADCu;
    // 0x1c1adc: 0x0  nop
    ctx->pc = 0x1c1adcu;
    // NOP
    ctx->pc = 0x1c1ae0u;
}
