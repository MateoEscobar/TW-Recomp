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

// Function: sub_00113920
// Address: 0x113920 - 0x113a08
void sub_00113920_0x113920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113920_0x113920");
#endif

    switch (ctx->pc) {
        case 0x11398cu: goto label_11398c;
        case 0x1139d4u: goto label_1139d4;
        default: break;
    }

    ctx->pc = 0x113920u;

    // 0x113920: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x113920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x113924: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x113924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x113928: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x113928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x11392c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x11392cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113930: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x113930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x113934: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x113934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113938: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x113938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x11393c: 0x160802d  daddu       $s0, $t3, $zero
    ctx->pc = 0x11393cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113940: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x113940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x113944: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x113944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x113948: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x113948u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11394c: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x11394cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x113950: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x113950u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113954: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x113954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x113958: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x113958u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11395c: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x11395cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x113960: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x113960u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113964: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x113964u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x113968: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x113968u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11396c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11396cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x113970: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x113970u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x113974: 0x93b100d8  lbu         $s1, 0xD8($sp)
    ctx->pc = 0x113974u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x113978: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x113978u;
    {
        const bool branch_taken_0x113978 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11397Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113978u;
        // 0x11397c: 0x83b200e0  lb          $s2, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113978) {
            ctx->pc = 0x113994u;
            goto label_113994;
        }
    }
    ctx->pc = 0x113980u;
    // 0x113980: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x113980u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x113984: 0xc050fda  jal         func_143F68
    ctx->pc = 0x113984u;
    SET_GPR_U32(ctx, 31, 0x11398Cu);
    ctx->pc = 0x113988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113984u;
    // 0x113988: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x113984u, 0x11398Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11398Cu;
label_11398c:
    // 0x11398c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11398Cu;
    {
        const bool branch_taken_0x11398c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11398Cu;
        // 0x113990: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11398c) {
            ctx->pc = 0x113998u;
            goto label_113998;
        }
    }
    ctx->pc = 0x113994u;
label_113994:
    // 0x113994: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x113994u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_113998:
    // 0x113998: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x113998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x11399c: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x11399cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x1139a0: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x1139a0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x1139a4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1139a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1139a8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1139a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1139ac: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1139acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1139b0: 0xafb10010  sw          $s1, 0x10($sp)
    ctx->pc = 0x1139b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 17));
    // 0x1139b4: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1139b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1139b8: 0xafb20018  sw          $s2, 0x18($sp)
    ctx->pc = 0x1139b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 18));
    // 0x1139bc: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x1139bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1139c0: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x1139c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1139c4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1139c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1139c8: 0x3c0582d  daddu       $t3, $fp, $zero
    ctx->pc = 0x1139c8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1139cc: 0xc0443a6  jal         func_110E98
    ctx->pc = 0x1139CCu;
    SET_GPR_U32(ctx, 31, 0x1139D4u);
    ctx->pc = 0x1139D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1139CCu;
    // 0x1139d0: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110E98u, 0x1139CCu, 0x1139D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1139D4u;
label_1139d4:
    // 0x1139d4: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1139d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1139d8: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1139d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1139dc: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1139dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1139e0: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x1139e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1139e4: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1139e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1139e8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1139e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1139ec: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x1139ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1139f0: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x1139f0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1139f4: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x1139f4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1139f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1139f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1139fc: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x1139fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x113a00: 0x3e00008  jr          $ra
    ctx->pc = 0x113A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113A00u;
        // 0x113a04: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113A08u;
}
