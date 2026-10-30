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

// Function: sub_0031E3B8
// Address: 0x31e3b8 - 0x31e4f0
void sub_0031E3B8_0x31e3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E3B8_0x31e3b8");
#endif

    switch (ctx->pc) {
        case 0x31e418u: goto label_31e418;
        case 0x31e438u: goto label_31e438;
        case 0x31e478u: goto label_31e478;
        default: break;
    }

    ctx->pc = 0x31e3b8u;

    // 0x31e3b8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x31e3b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x31e3bc: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x31e3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x31e3c0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x31e3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x31e3c4: 0x24423260  addiu       $v0, $v0, 0x3260
    ctx->pc = 0x31e3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12896));
    // 0x31e3c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31e3c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e3cc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x31e3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x31e3d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31e3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x31e3d4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x31e3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x31e3d8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x31e3d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e3dc: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x31e3dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x31e3e0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x31e3e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e3e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31e3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31e3e8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x31e3e8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x31e3ec: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x31e3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x31e3f0: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x31e3f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e3f4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x31e3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x31e3f8: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x31e3f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e3fc: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x31e3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x31e400: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x31e400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x31e404: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x31e404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x31e408: 0xa2000018  sb          $zero, 0x18($s0)
    ctx->pc = 0x31e408u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x31e40c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x31e40cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x31e410: 0xc0c1a3e  jal         func_3068F8
    ctx->pc = 0x31E410u;
    SET_GPR_U32(ctx, 31, 0x31E418u);
    ctx->pc = 0x31E414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E410u;
    // 0x31e414: 0xae0a0008  sw          $t2, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3068F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3068F8u, 0x31E410u, 0x31E418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E418u;
label_31e418:
    // 0x31e418: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x31e418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x31e41c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x31e41cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x31e420: 0x24424040  addiu       $v0, $v0, 0x4040
    ctx->pc = 0x31e420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16448));
    // 0x31e424: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x31e424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31e428: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x31e428u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x31e42c: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x31e42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x31e430: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x31e430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31e434: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x31e434u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_31e438:
    // 0x31e438: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x31e438u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x31e43c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x31e43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x31e440: 0x0  nop
    ctx->pc = 0x31e440u;
    // NOP
    // 0x31e444: 0x0  nop
    ctx->pc = 0x31e444u;
    // NOP
    // 0x31e448: 0x1445fffb  bne         $v0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x31E448u;
    {
        const bool branch_taken_0x31e448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x31E44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E448u;
        // 0x31e44c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e448) {
            ctx->pc = 0x31E438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31e438;
        }
    }
    ctx->pc = 0x31E450u;
    // 0x31e450: 0xae120030  sw          $s2, 0x30($s0)
    ctx->pc = 0x31e450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 18));
    // 0x31e454: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31e454u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e458: 0xae130034  sw          $s3, 0x34($s0)
    ctx->pc = 0x31e458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 19));
    // 0x31e45c: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x31e45cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
    // 0x31e460: 0xe6140040  swc1        $f20, 0x40($s0)
    ctx->pc = 0x31e460u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x31e464: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31e464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e468: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x31e468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x31e46c: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x31e46cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x31e470: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x31e470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x31e474: 0xa2000044  sb          $zero, 0x44($s0)
    ctx->pc = 0x31e474u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 68), (uint8_t)GPR_U32(ctx, 0));
label_31e478:
    // 0x31e478: 0x8ce2bd30  lw          $v0, -0x42D0($a3)
    ctx->pc = 0x31e478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294950192)));
    // 0x31e47c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x31E47Cu;
    {
        const bool branch_taken_0x31e47c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E47Cu;
        // 0x31e480: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e47c) {
            ctx->pc = 0x31E4A0u;
            goto label_31e4a0;
        }
    }
    ctx->pc = 0x31E484u;
    // 0x31e484: 0x92020044  lbu         $v0, 0x44($s0)
    ctx->pc = 0x31e484u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x31e488: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x31e488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31e48c: 0xa2030044  sb          $v1, 0x44($s0)
    ctx->pc = 0x31e48cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 68), (uint8_t)GPR_U32(ctx, 3));
    // 0x31e490: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x31e490u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x31e494: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x31e494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x31e498: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x31e498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x31e49c: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x31e49cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
label_31e4a0:
    // 0x31e4a0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x31e4a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x31e4a4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x31e4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x31e4a8: 0x2cc20004  sltiu       $v0, $a2, 0x4
    ctx->pc = 0x31e4a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x31e4ac: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x31E4ACu;
    {
        const bool branch_taken_0x31e4ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E4ACu;
        // 0x31e4b0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e4ac) {
            ctx->pc = 0x31E478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31e478;
        }
    }
    ctx->pc = 0x31E4B4u;
    // 0x31e4b4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x31e4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x31e4b8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x31e4b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31e4bc: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x31e4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B734u));
    // 0x31e4c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x31e4c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e4c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31e4c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31e4c8: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x31e4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x31e4cc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x31e4ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31e4d0: 0x24630bb8  addiu       $v1, $v1, 0xBB8
    ctx->pc = 0x31e4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3000));
    // 0x31e4d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31e4d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31e4d8: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x31e4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x31e4dc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x31e4dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31e4e0: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x31e4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x31e4e4: 0x3e00008  jr          $ra
    ctx->pc = 0x31E4E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E4E4u;
        // 0x31e4e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E4E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E4ECu;
    // 0x31e4ec: 0x0  nop
    ctx->pc = 0x31e4ecu;
    // NOP
    ctx->pc = 0x31e4f0u;
}
