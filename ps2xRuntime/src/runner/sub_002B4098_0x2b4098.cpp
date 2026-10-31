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

// Function: sub_002B4098
// Address: 0x2b4098 - 0x2b4158
void sub_002B4098_0x2b4098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B4098_0x2b4098");
#endif

    switch (ctx->pc) {
        case 0x2b4120u: goto label_2b4120;
        default: break;
    }

    ctx->pc = 0x2b4098u;

    // 0x2b4098: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b4098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b409c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2b409cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2b40a0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2b40a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2b40a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2b40a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2b40a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b40a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b40ac: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2b40acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2b40b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b40b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b40b4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2b40b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2b40b8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2b40b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2b40bc: 0x24630270  addiu       $v1, $v1, 0x270
    ctx->pc = 0x2b40bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 624));
    // 0x2b40c0: 0xa2060028  sb          $a2, 0x28($s0)
    ctx->pc = 0x2b40c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 6));
    // 0x2b40c4: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x2b40c4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    // 0x2b40c8: 0xa2070029  sb          $a3, 0x29($s0)
    ctx->pc = 0x2b40c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 7));
    // 0x2b40cc: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2b40ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2b40d0: 0xa20b002a  sb          $t3, 0x2A($s0)
    ctx->pc = 0x2b40d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 42), (uint8_t)GPR_U32(ctx, 11));
    // 0x2b40d4: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2b40d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    // 0x2b40d8: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x2b40d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b40dc: 0x93082  srl         $a2, $t1, 2
    ctx->pc = 0x2b40dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 2));
    // 0x2b40e0: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x2b40e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b40e4: 0xa200002b  sb          $zero, 0x2B($s0)
    ctx->pc = 0x2b40e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b40e8: 0xa200002c  sb          $zero, 0x2C($s0)
    ctx->pc = 0x2b40e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b40ec: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2b40ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2b40f0: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2b40f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x2b40f4: 0xae0a0008  sw          $t2, 0x8($s0)
    ctx->pc = 0x2b40f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 10));
    // 0x2b40f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b40f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b40fc: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2b40fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x2b4100: 0xae08001c  sw          $t0, 0x1C($s0)
    ctx->pc = 0x2b4100u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 8));
    // 0x2b4104: 0xe60c0024  swc1        $f12, 0x24($s0)
    ctx->pc = 0x2b4104u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x2b4108: 0xae090020  sw          $t1, 0x20($s0)
    ctx->pc = 0x2b4108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 9));
    // 0x2b410c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2b410cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x2b4110: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2b4110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x2b4114: 0x8e42b734  lw          $v0, -0x48CC($s2)
    ctx->pc = 0x2b4114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294948660)));
    // 0x2b4118: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x2B4118u;
    SET_GPR_U32(ctx, 31, 0x2B4120u);
    ctx->pc = 0x2B411Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4118u;
    // 0x2b411c: 0x8c510048  lw          $s1, 0x48($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2B4118u, 0x2B4120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4120u;
label_2b4120:
    // 0x2b4120: 0x8e44b734  lw          $a0, -0x48CC($s2)
    ctx->pc = 0x2b4120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294948660)));
    // 0x2b4124: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x2b4124u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2b4128: 0xae110014  sw          $s1, 0x14($s0)
    ctx->pc = 0x2b4128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 17));
    // 0x2b412c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b412cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4130: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2b4130u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b4134: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2b4134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2b4138: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2b4138u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b413c: 0x24630bb8  addiu       $v1, $v1, 0xBB8
    ctx->pc = 0x2b413cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3000));
    // 0x2b4140: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b4140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4144: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x2b4144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x2b4148: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2b4148u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b414c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B414Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B414Cu;
        // 0x2b4150: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B414Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4154u;
    // 0x2b4154: 0x0  nop
    ctx->pc = 0x2b4154u;
    // NOP
    ctx->pc = 0x2b4158u;
}
