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

// Function: sub_001828E0
// Address: 0x1828e0 - 0x182a50
void sub_001828E0_0x1828e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001828E0_0x1828e0");
#endif

    switch (ctx->pc) {
        case 0x18293cu: goto label_18293c;
        case 0x182998u: goto label_182998;
        case 0x1829d8u: goto label_1829d8;
        default: break;
    }

    ctx->pc = 0x1828e0u;

    // 0x1828e0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1828e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1828e4: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x1828e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x1828e8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1828e8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1828ec: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1828ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1828f0: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1828f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1828f4: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x1828f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1828f8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1828f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x1828fc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1828fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182900: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x182900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x182904: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x182904u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182908: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x182908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x18290c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x18290cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182910: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x182910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x182914: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x182914u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182918: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x182918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x18291c: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x18291cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x182920: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x182920u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182924: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x182924u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x182928: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x182928u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18292c: 0x8fb500c0  lw          $s5, 0xC0($sp)
    ctx->pc = 0x18292cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x182930: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x182930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x182934: 0xc060ab2  jal         func_182AC8
    ctx->pc = 0x182934u;
    SET_GPR_U32(ctx, 31, 0x18293Cu);
    ctx->pc = 0x182938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182934u;
    // 0x182938: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x182AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182AC8u, 0x182934u, 0x18293Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18293Cu;
label_18293c:
    // 0x18293c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x18293cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182940: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x182940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x182944: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x182944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x182948: 0xaed10000  sw          $s1, 0x0($s6)
    ctx->pc = 0x182948u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 17));
    // 0x18294c: 0xaed20018  sw          $s2, 0x18($s6)
    ctx->pc = 0x18294cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 24), GPR_U32(ctx, 18));
    // 0x182950: 0xaed30024  sw          $s3, 0x24($s6)
    ctx->pc = 0x182950u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 36), GPR_U32(ctx, 19));
    // 0x182954: 0xaed0003c  sw          $s0, 0x3C($s6)
    ctx->pc = 0x182954u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 16));
    // 0x182958: 0xa2d40041  sb          $s4, 0x41($s6)
    ctx->pc = 0x182958u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 65), (uint8_t)GPR_U32(ctx, 20));
    // 0x18295c: 0xa2c40040  sb          $a0, 0x40($s6)
    ctx->pc = 0x18295cu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 64), (uint8_t)GPR_U32(ctx, 4));
    // 0x182960: 0xe6d40020  swc1        $f20, 0x20($s6)
    ctx->pc = 0x182960u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 32), bits); }
    // 0x182964: 0xaec20030  sw          $v0, 0x30($s6)
    ctx->pc = 0x182964u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 48), GPR_U32(ctx, 2));
    // 0x182968: 0xaec30034  sw          $v1, 0x34($s6)
    ctx->pc = 0x182968u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 52), GPR_U32(ctx, 3));
    // 0x18296c: 0xa2d50042  sb          $s5, 0x42($s6)
    ctx->pc = 0x18296cu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 66), (uint8_t)GPR_U32(ctx, 21));
    // 0x182970: 0xaede0038  sw          $fp, 0x38($s6)
    ctx->pc = 0x182970u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 56), GPR_U32(ctx, 30));
    // 0x182974: 0xa2c40010  sb          $a0, 0x10($s6)
    ctx->pc = 0x182974u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 16), (uint8_t)GPR_U32(ctx, 4));
    // 0x182978: 0xa2c00013  sb          $zero, 0x13($s6)
    ctx->pc = 0x182978u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 19), (uint8_t)GPR_U32(ctx, 0));
    // 0x18297c: 0xa2c00011  sb          $zero, 0x11($s6)
    ctx->pc = 0x18297cu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 17), (uint8_t)GPR_U32(ctx, 0));
    // 0x182980: 0x16e00009  bnez        $s7, . + 4 + (0x9 << 2)
    ctx->pc = 0x182980u;
    {
        const bool branch_taken_0x182980 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x182984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182980u;
        // 0x182984: 0xa2c00012  sb          $zero, 0x12($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 18), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182980) {
            ctx->pc = 0x1829A8u;
            goto label_1829a8;
        }
    }
    ctx->pc = 0x182988u;
    // 0x182988: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x182988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18298c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18298cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182990: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x182990u;
    SET_GPR_U32(ctx, 31, 0x182998u);
    ctx->pc = 0x182994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182990u;
    // 0x182994: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x182990u, 0x182998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182998u;
label_182998:
    // 0x182998: 0x8ec40008  lw          $a0, 0x8($s6)
    ctx->pc = 0x182998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x18299c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x18299cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1829a0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1829A0u;
    {
        const bool branch_taken_0x1829a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1829A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1829A0u;
        // 0x1829a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1829a0) {
            ctx->pc = 0x1829D0u;
            goto label_1829d0;
        }
    }
    ctx->pc = 0x1829A8u;
label_1829a8:
    // 0x1829a8: 0xc6e00004  lwc1        $f0, 0x4($s7)
    ctx->pc = 0x1829a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1829ac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1829acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1829b0: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x1829b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1829b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1829b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1829b8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1829b8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1829bc: 0xc6e10008  lwc1        $f1, 0x8($s7)
    ctx->pc = 0x1829bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1829c0: 0x8ec40008  lw          $a0, 0x8($s6)
    ctx->pc = 0x1829c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x1829c4: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1829c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1829c8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1829c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1829cc: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1829ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1829d0:
    // 0x1829d0: 0xc120ed6  jal         func_483B58
    ctx->pc = 0x1829D0u;
    SET_GPR_U32(ctx, 31, 0x1829D8u);
    ctx->pc = 0x483B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483B58u, 0x1829D0u, 0x1829D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1829D8u;
label_1829d8:
    // 0x1829d8: 0xaec20008  sw          $v0, 0x8($s6)
    ctx->pc = 0x1829d8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
    // 0x1829dc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1829dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1829e0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1829e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1829e4: 0x3bc40002  xori        $a0, $fp, 0x2
    ctx->pc = 0x1829e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 30) ^ (uint64_t)(uint16_t)2);
    // 0x1829e8: 0x34630082  ori         $v1, $v1, 0x82
    ctx->pc = 0x1829e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)130);
    // 0x1829ec: 0x3442008a  ori         $v0, $v0, 0x8A
    ctx->pc = 0x1829ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)138);
    // 0x1829f0: 0x3bc60001  xori        $a2, $fp, 0x1
    ctx->pc = 0x1829f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 30) ^ (uint64_t)(uint16_t)1);
    // 0x1829f4: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x1829f4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1829f8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1829f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1829fc: 0x34440025  ori         $a0, $v0, 0x25
    ctx->pc = 0x1829fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37);
    // 0x182a00: 0xaec5002c  sw          $a1, 0x2C($s6)
    ctx->pc = 0x182a00u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 44), GPR_U32(ctx, 5));
    // 0x182a04: 0x46200b  movn        $a0, $v0, $a2
    ctx->pc = 0x182a04u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x182a08: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x182a08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x182a0c: 0x34830005  ori         $v1, $a0, 0x5
    ctx->pc = 0x182a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)5);
    // 0x182a10: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x182a10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x182a14: 0x9e180b  movn        $v1, $a0, $fp
    ctx->pc = 0x182a14u;
    if (GPR_U64(ctx, 30) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x182a18: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x182a18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x182a1c: 0xaec30028  sw          $v1, 0x28($s6)
    ctx->pc = 0x182a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 40), GPR_U32(ctx, 3));
    // 0x182a20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x182a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182a24: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x182a24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x182a28: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x182a28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x182a2c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x182a2cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x182a30: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x182a30u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x182a34: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x182a34u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x182a38: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x182a38u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x182a3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x182a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182a40: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x182a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x182a44: 0x3e00008  jr          $ra
    ctx->pc = 0x182A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182A44u;
        // 0x182a48: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182A44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182A4Cu;
    // 0x182a4c: 0x0  nop
    ctx->pc = 0x182a4cu;
    // NOP
    ctx->pc = 0x182a50u;
}
