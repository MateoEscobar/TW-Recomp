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

// Function: sub_00134AB0
// Address: 0x134ab0 - 0x134b70
void sub_00134AB0_0x134ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00134AB0_0x134ab0");
#endif

    switch (ctx->pc) {
        case 0x134b08u: goto label_134b08;
        case 0x134b24u: goto label_134b24;
        case 0x134b38u: goto label_134b38;
        case 0x134b4cu: goto label_134b4c;
        default: break;
    }

    ctx->pc = 0x134ab0u;

    // 0x134ab0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x134ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x134ab4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x134ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x134ab8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x134ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x134abc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x134abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x134ac0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x134ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x134ac4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x134ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x134ac8: 0x14a20021  bne         $a1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x134AC8u;
    {
        const bool branch_taken_0x134ac8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x134ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134AC8u;
        // 0x134acc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134ac8) {
            ctx->pc = 0x134B50u;
            goto label_134b50;
        }
    }
    ctx->pc = 0x134AD0u;
    // 0x134ad0: 0x1080001f  beqz        $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x134AD0u;
    {
        const bool branch_taken_0x134ad0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x134AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134AD0u;
        // 0x134ad4: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134ad0) {
            ctx->pc = 0x134B50u;
            goto label_134b50;
        }
    }
    ctx->pc = 0x134AD8u;
    // 0x134ad8: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x134ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
    // 0x134adc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x134adcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x134ae0: 0x3c0142e6  lui         $at, 0x42E6
    ctx->pc = 0x134ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17126 << 16));
    // 0x134ae4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x134ae4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134ae8: 0x3c11005e  lui         $s1, 0x5E
    ctx->pc = 0x134ae8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)94 << 16));
    // 0x134aec: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x134aecu;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x134af0: 0x3c013fa7  lui         $at, 0x3FA7
    ctx->pc = 0x134af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16295 << 16));
    // 0x134af4: 0x34218d37  ori         $at, $at, 0x8D37
    ctx->pc = 0x134af4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36151);
    // 0x134af8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x134af8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x134afc: 0xe44091c0  swc1        $f0, -0x6E40($v0)
    ctx->pc = 0x134afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294939072), bits); }
    // 0x134b00: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x134B00u;
    SET_GPR_U32(ctx, 31, 0x134B08u);
    ctx->pc = 0x134B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134B00u;
    // 0x134b04: 0x3c10005e  lui         $s0, 0x5E (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x134B00u, 0x134B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134B08u;
label_134b08:
    // 0x134b08: 0x3c12005e  lui         $s2, 0x5E
    ctx->pc = 0x134b08u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)94 << 16));
    // 0x134b0c: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x134b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x134b10: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x134b10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x134b14: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x134b14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x134b18: 0x3c13005e  lui         $s3, 0x5E
    ctx->pc = 0x134b18u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)94 << 16));
    // 0x134b1c: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x134B1Cu;
    SET_GPR_U32(ctx, 31, 0x134B24u);
    ctx->pc = 0x134B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134B1Cu;
    // 0x134b20: 0xe62091c4  swc1        $f0, -0x6E3C($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294939076), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x134B1Cu, 0x134B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134B24u;
label_134b24:
    // 0x134b24: 0x3c013f6d  lui         $at, 0x3F6D
    ctx->pc = 0x134b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16237 << 16));
    // 0x134b28: 0x3421631b  ori         $at, $at, 0x631B
    ctx->pc = 0x134b28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)25371);
    // 0x134b2c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x134b2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x134b30: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x134B30u;
    SET_GPR_U32(ctx, 31, 0x134B38u);
    ctx->pc = 0x134B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134B30u;
    // 0x134b34: 0xe60091c8  swc1        $f0, -0x6E38($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294939080), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x134B30u, 0x134B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134B38u;
label_134b38:
    // 0x134b38: 0x3c013e32  lui         $at, 0x3E32
    ctx->pc = 0x134b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15922 << 16));
    // 0x134b3c: 0x3421b8c3  ori         $at, $at, 0xB8C3
    ctx->pc = 0x134b3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47299);
    // 0x134b40: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x134b40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x134b44: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x134B44u;
    SET_GPR_U32(ctx, 31, 0x134B4Cu);
    ctx->pc = 0x134B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134B44u;
    // 0x134b48: 0xe64091cc  swc1        $f0, -0x6E34($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4294939084), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x134B44u, 0x134B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134B4Cu;
label_134b4c:
    // 0x134b4c: 0xe66091d0  swc1        $f0, -0x6E30($s3)
    ctx->pc = 0x134b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4294939088), bits); }
label_134b50:
    // 0x134b50: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x134b50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x134b54: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x134b54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x134b58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x134b58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x134b5c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x134b5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x134b60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x134b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134b64: 0x3e00008  jr          $ra
    ctx->pc = 0x134B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134B64u;
        // 0x134b68: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134B6Cu;
    // 0x134b6c: 0x0  nop
    ctx->pc = 0x134b6cu;
    // NOP
    ctx->pc = 0x134b70u;
}
