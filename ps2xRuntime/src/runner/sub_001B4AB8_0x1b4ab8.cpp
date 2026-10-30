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

// Function: sub_001B4AB8
// Address: 0x1b4ab8 - 0x1b4ba0
void sub_001B4AB8_0x1b4ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4AB8_0x1b4ab8");
#endif

    switch (ctx->pc) {
        case 0x1b4b94u: goto label_1b4b94;
        default: break;
    }

    ctx->pc = 0x1b4ab8u;

    // 0x1b4ab8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1b4ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1b4abc: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b4abcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b4ac0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b4ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1b4ac4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b4ac4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4ac8: 0x24429e80  addiu       $v0, $v0, -0x6180
    ctx->pc = 0x1b4ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942336));
    // 0x1b4acc: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1b4accu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4ad0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1b4ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x609E8Cu));
    // 0x1b4ad4: 0x1460002f  bnez        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x1B4AD4u;
    {
        const bool branch_taken_0x1b4ad4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4AD4u;
        // 0x1b4ad8: 0xa0502d  daddu       $t2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4ad4) {
            ctx->pc = 0x1B4B94u;
            goto label_1b4b94;
        }
    }
    ctx->pc = 0x1B4ADCu;
    // 0x1b4adc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b4adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b4ae0: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x1b4ae0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1b4ae4: 0x24420840  addiu       $v0, $v0, 0x840
    ctx->pc = 0x1b4ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
    // 0x1b4ae8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b4ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b4aec: 0x8c431680  lw          $v1, 0x1680($v0)
    ctx->pc = 0x1b4aecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x609EC0u));
    // 0x1b4af0: 0x3c013f38  lui         $at, 0x3F38
    ctx->pc = 0x1b4af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16184 << 16));
    // 0x1b4af4: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1b4af4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x1b4af8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b4af8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b4afc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B4AFCu;
    {
        const bool branch_taken_0x1b4afc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4AFCu;
        // 0x1b4b00: 0x27a20020  addiu       $v0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4afc) {
            ctx->pc = 0x1B4B10u;
            goto label_1b4b10;
        }
    }
    ctx->pc = 0x1B4B04u;
    // 0x1b4b04: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x1b4b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x1b4b08: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1b4b08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1b4b0c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b4b0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b4b10:
    // 0x1b4b10: 0x3c013e75  lui         $at, 0x3E75
    ctx->pc = 0x1b4b10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15989 << 16));
    // 0x1b4b14: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1b4b14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1b4b18: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b4b18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b4b1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b4b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b4b20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b4b20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b4b24: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x1b4b24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1b4b28: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1b4b28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1b4b2c: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x1b4b2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1b4b30: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1b4b30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1b4b34: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1b4b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b4b38: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1b4b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b4b3c: 0xa3a50030  sb          $a1, 0x30($sp)
    ctx->pc = 0x1b4b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 5));
    // 0x1b4b40: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1b4b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1b4b44: 0xa0650002  sb          $a1, 0x2($v1)
    ctx->pc = 0x1b4b44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x1b4b48: 0x24c49e80  addiu       $a0, $a2, -0x6180
    ctx->pc = 0x1b4b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942336));
    // 0x1b4b4c: 0xa0650001  sb          $a1, 0x1($v1)
    ctx->pc = 0x1b4b4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x1b4b50: 0x3c0bffff  lui         $t3, 0xFFFF
    ctx->pc = 0x1b4b50u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65535 << 16));
    // 0x1b4b54: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1b4b54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b4b58: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1b4b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b4b5c: 0x3c013de1  lui         $at, 0x3DE1
    ctx->pc = 0x1b4b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15841 << 16));
    // 0x1b4b60: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1b4b60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x1b4b64: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b4b64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b4b68: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b4b68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4b6c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x1b4b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b4b70: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1b4b70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4b74: 0x3c01462b  lui         $at, 0x462B
    ctx->pc = 0x1b4b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17963 << 16));
    // 0x1b4b78: 0x3421e000  ori         $at, $at, 0xE000
    ctx->pc = 0x1b4b78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57344);
    // 0x1b4b7c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1b4b7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1b4b80: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x1b4b80u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x1b4b84: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b4b84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b4b88: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1b4b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1b4b8c: 0xc068f40  jal         func_1A3D00
    ctx->pc = 0x1B4B8Cu;
    SET_GPR_U32(ctx, 31, 0x1B4B94u);
    ctx->pc = 0x1B4B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4B8Cu;
    // 0x1b4b90: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3D00u, 0x1B4B8Cu, 0x1B4B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4B94u;
label_1b4b94:
    // 0x1b4b94: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b4b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b4b98: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4B98u;
        // 0x1b4b9c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4BA0u;
}
