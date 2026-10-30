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

// Function: sub_00111DE8
// Address: 0x111de8 - 0x111f40
void sub_00111DE8_0x111de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111DE8_0x111de8");
#endif

    switch (ctx->pc) {
        case 0x111e4cu: goto label_111e4c;
        case 0x111e60u: goto label_111e60;
        case 0x111e90u: goto label_111e90;
        case 0x111e98u: goto label_111e98;
        case 0x111eacu: goto label_111eac;
        case 0x111ed4u: goto label_111ed4;
        case 0x111eecu: goto label_111eec;
        case 0x111f04u: goto label_111f04;
        default: break;
    }

    ctx->pc = 0x111de8u;

    // 0x111de8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x111de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x111dec: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x111decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x111df0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x111df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x111df4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x111df4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111df8: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x111df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x111dfc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x111dfcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111e00: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x111e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x111e04: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x111e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111e08: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x111e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x111e0c: 0x160802d  daddu       $s0, $t3, $zero
    ctx->pc = 0x111e0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111e10: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x111e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x111e14: 0x311400ff  andi        $s4, $t0, 0xFF
    ctx->pc = 0x111e14u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x111e18: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x111e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x111e1c: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x111e1cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111e20: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x111e20u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x111e24: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x111e24u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111e28: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x111e28u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x111e2c: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x111e2cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x111e30: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x111e30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x111e34: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x111e34u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x111e38: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x111e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x111e3c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x111e3cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x111e40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x111e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x111e44: 0xc044832  jal         func_1120C8
    ctx->pc = 0x111E44u;
    SET_GPR_U32(ctx, 31, 0x111E4Cu);
    ctx->pc = 0x111E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111E44u;
    // 0x111e48: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1120C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1120C8u, 0x111E44u, 0x111E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111E4Cu;
label_111e4c:
    // 0x111e4c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x111e4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111e50: 0x1220002d  beqz        $s1, . + 4 + (0x2D << 2)
    ctx->pc = 0x111E50u;
    {
        const bool branch_taken_0x111e50 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x111E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111E50u;
        // 0x111e54: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111e50) {
            ctx->pc = 0x111F08u;
            goto label_111f08;
        }
    }
    ctx->pc = 0x111E58u;
    // 0x111e58: 0xc044bb8  jal         func_112EE0
    ctx->pc = 0x111E58u;
    SET_GPR_U32(ctx, 31, 0x111E60u);
    ctx->pc = 0x111E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111E58u;
    // 0x111e5c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112EE0u, 0x111E58u, 0x111E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111E60u;
label_111e60:
    // 0x111e60: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x111e60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x111e64: 0xae3000a4  sw          $s0, 0xA4($s1)
    ctx->pc = 0x111e64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 16));
    // 0x111e68: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x111E68u;
    {
        const bool branch_taken_0x111e68 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x111E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111E68u;
        // 0x111e6c: 0xe6200074  swc1        $f0, 0x74($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x111e68) {
            ctx->pc = 0x111E84u;
            goto label_111e84;
        }
    }
    ctx->pc = 0x111E70u;
    // 0x111e70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x111e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x111e74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x111e74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x111e78: 0xae2000a0  sw          $zero, 0xA0($s1)
    ctx->pc = 0x111e78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
    // 0x111e7c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x111E7Cu;
    {
        const bool branch_taken_0x111e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111E7Cu;
        // 0x111e80: 0xe620006c  swc1        $f0, 0x6C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x111e7c) {
            ctx->pc = 0x111E88u;
            goto label_111e88;
        }
    }
    ctx->pc = 0x111E84u;
label_111e84:
    // 0x111e84: 0xe635006c  swc1        $f21, 0x6C($s1)
    ctx->pc = 0x111e84u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 108), bits); }
label_111e88:
    // 0x111e88: 0xc0e4060  jal         func_390180
    ctx->pc = 0x111E88u;
    SET_GPR_U32(ctx, 31, 0x111E90u);
    ctx->pc = 0x111E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111E88u;
    // 0x111e8c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x111E88u, 0x111E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111E90u;
label_111e90:
    // 0x111e90: 0xc08a61a  jal         func_229868
    ctx->pc = 0x111E90u;
    SET_GPR_U32(ctx, 31, 0x111E98u);
    ctx->pc = 0x111E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111E90u;
    // 0x111e94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x111E90u, 0x111E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111E98u;
label_111e98:
    // 0x111e98: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x111E98u;
    {
        const bool branch_taken_0x111e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111E98u;
        // 0x111e9c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111e98) {
            ctx->pc = 0x111EB0u;
            goto label_111eb0;
        }
    }
    ctx->pc = 0x111EA0u;
    // 0x111ea0: 0x9045016c  lbu         $a1, 0x16C($v0)
    ctx->pc = 0x111ea0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 364)));
    // 0x111ea4: 0xc046cfe  jal         func_11B3F8
    ctx->pc = 0x111EA4u;
    SET_GPR_U32(ctx, 31, 0x111EACu);
    ctx->pc = 0x111EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111EA4u;
    // 0x111ea8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B3F8u, 0x111EA4u, 0x111EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111EACu;
label_111eac:
    // 0x111eac: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x111eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_111eb0:
    // 0x111eb0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x111eb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111eb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111eb8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x111eb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x111ebc: 0xae2300e8  sw          $v1, 0xE8($s1)
    ctx->pc = 0x111ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 3));
    // 0x111ec0: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x111ec0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x111ec4: 0x7e2200c0  sq          $v0, 0xC0($s1)
    ctx->pc = 0x111ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 192), GPR_VEC(ctx, 2));
    // 0x111ec8: 0x7a430010  lq          $v1, 0x10($s2)
    ctx->pc = 0x111ec8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x111ecc: 0xc046c6c  jal         func_11B1B0
    ctx->pc = 0x111ECCu;
    SET_GPR_U32(ctx, 31, 0x111ED4u);
    ctx->pc = 0x111ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111ECCu;
    // 0x111ed0: 0x7e2300d0  sq          $v1, 0xD0($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 208), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B1B0u, 0x111ECCu, 0x111ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111ED4u;
label_111ed4:
    // 0x111ed4: 0xe63600a8  swc1        $f22, 0xA8($s1)
    ctx->pc = 0x111ed4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 168), bits); }
    // 0x111ed8: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x111ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x111edc: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x111edcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
    // 0x111ee0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111ee4: 0xc04685c  jal         func_11A170
    ctx->pc = 0x111EE4u;
    SET_GPR_U32(ctx, 31, 0x111EECu);
    ctx->pc = 0x111EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111EE4u;
    // 0x111ee8: 0xae300060  sw          $s0, 0x60($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A170u, 0x111EE4u, 0x111EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111EECu;
label_111eec:
    // 0x111eec: 0xae3500e0  sw          $s5, 0xE0($s1)
    ctx->pc = 0x111eecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 21));
    // 0x111ef0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111ef4: 0xae3600e4  sw          $s6, 0xE4($s1)
    ctx->pc = 0x111ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 22));
    // 0x111ef8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x111ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x111efc: 0xc046c4a  jal         func_11B128
    ctx->pc = 0x111EFCu;
    SET_GPR_U32(ctx, 31, 0x111F04u);
    ctx->pc = 0x111F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111EFCu;
    // 0x111f00: 0xae200038  sw          $zero, 0x38($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B128u, 0x111EFCu, 0x111F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111F04u;
label_111f04:
    // 0x111f04: 0xae300060  sw          $s0, 0x60($s1)
    ctx->pc = 0x111f04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 16));
label_111f08:
    // 0x111f08: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x111f08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111f0c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x111f0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x111f10: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x111f10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x111f14: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x111f14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x111f18: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x111f18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x111f1c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x111f1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x111f20: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x111f20u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x111f24: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x111f24u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x111f28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x111f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111f2c: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x111f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x111f30: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x111f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x111f34: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x111f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x111f38: 0x3e00008  jr          $ra
    ctx->pc = 0x111F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111F38u;
        // 0x111f3c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111F38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111F40u;
}
