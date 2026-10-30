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

// Function: sub_002E1230
// Address: 0x2e1230 - 0x2e1320
void sub_002E1230_0x2e1230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1230_0x2e1230");
#endif

    switch (ctx->pc) {
        case 0x2e12b0u: goto label_2e12b0;
        case 0x2e12e0u: goto label_2e12e0;
        case 0x2e12ecu: goto label_2e12ec;
        default: break;
    }

    ctx->pc = 0x2e1230u;

    // 0x2e1230: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2e1230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2e1234: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2e1234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2e1238: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2e1238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2e123c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2e123cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2e1240: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2e1240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2e1244: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e1244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1248: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2e1248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2e124c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2e124cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1250: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2e1250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2e1254: 0x24631b30  addiu       $v1, $v1, 0x1B30
    ctx->pc = 0x2e1254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6960));
    // 0x2e1258: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2e1258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2e125c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e125cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e1260: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2e1260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2e1264: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2e1264u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1268: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x2e1268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x2e126c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2e126cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1270: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x2e1270u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2e1274: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2e1274u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1278: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e1278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e127c: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x2e127cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1280: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x2e1280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x2e1284: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2e1284u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2e1288: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x2e1288u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e128c: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x2e128cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1290: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x2e1290u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e1294: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2e1294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2e1298: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2e1298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x2e129c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2e129cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2e12a0: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2e12a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x2e12a4: 0xe60d0018  swc1        $f13, 0x18($s0)
    ctx->pc = 0x2e12a4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x2e12a8: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2E12A8u;
    SET_GPR_U32(ctx, 31, 0x2E12B0u);
    ctx->pc = 0x2E12ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E12A8u;
    // 0x2e12ac: 0xa20b0025  sb          $t3, 0x25($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 37), (uint8_t)GPR_U32(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2E12A8u, 0x2E12B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E12B0u;
label_2e12b0:
    // 0x2e12b0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E12B0u;
    {
        const bool branch_taken_0x2e12b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E12B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E12B0u;
        // 0x2e12b4: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e12b0) {
            ctx->pc = 0x2E12E0u;
            goto label_2e12e0;
        }
    }
    ctx->pc = 0x2E12B8u;
    // 0x2e12b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e12b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e12bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e12bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e12c0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2e12c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e12c4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2e12c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e12c8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2e12c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e12cc: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x2e12ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e12d0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2e12d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2e12d4: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x2e12d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e12d8: 0xc0b81d2  jal         func_2E0748
    ctx->pc = 0x2E12D8u;
    SET_GPR_U32(ctx, 31, 0x2E12E0u);
    ctx->pc = 0x2E12DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E12D8u;
    // 0x2e12dc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0748u, 0x2E12D8u, 0x2E12E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E12E0u;
label_2e12e0:
    // 0x2e12e0: 0x162400  sll         $a0, $s6, 16
    ctx->pc = 0x2e12e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 16));
    // 0x2e12e4: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x2E12E4u;
    SET_GPR_U32(ctx, 31, 0x2E12ECu);
    ctx->pc = 0x2E12E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E12E4u;
    // 0x2e12e8: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x2E12E4u, 0x2E12ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E12ECu;
label_2e12ec:
    // 0x2e12ec: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x2e12ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x2e12f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e12f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e12f4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2e12f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e12f8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2e12f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e12fc: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2e12fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e1300: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2e1300u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e1304: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2e1304u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e1308: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2e1308u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e130c: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x2e130cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e1310: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e1310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e1314: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x2e1314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e1318: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E131Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1318u;
        // 0x2e131c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1320u;
}
