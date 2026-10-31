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

// Function: sub_001FE3D0
// Address: 0x1fe3d0 - 0x1fe548
void sub_001FE3D0_0x1fe3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE3D0_0x1fe3d0");
#endif

    switch (ctx->pc) {
        case 0x1fe418u: goto label_1fe418;
        case 0x1fe42cu: goto label_1fe42c;
        case 0x1fe488u: goto label_1fe488;
        default: break;
    }

    ctx->pc = 0x1fe3d0u;

    // 0x1fe3d0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1fe3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1fe3d4: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x1fe3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x1fe3d8: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x1fe3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x1fe3dc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1fe3dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe3e0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1fe3e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe3e4: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x1fe3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x1fe3e8: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x1fe3e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1fe3ec: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x1fe3ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe3f0: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1fe3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x1fe3f4: 0x274102b  sltu        $v0, $s3, $s4
    ctx->pc = 0x1fe3f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1fe3f8: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x1fe3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x1fe3fc: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1fe3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x1fe400: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1fe400u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1fe404: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1FE404u;
    {
        const bool branch_taken_0x1fe404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE404u;
        // 0x1fe408: 0xffbf0060  sd          $ra, 0x60($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe404) {
            ctx->pc = 0x1FE4C0u;
            goto label_1fe4c0;
        }
    }
    ctx->pc = 0x1FE40Cu;
    // 0x1fe40c: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x1fe40cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1fe410: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x1fe410u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
    // 0x1fe414: 0x448821  addu        $s1, $v0, $a0
    ctx->pc = 0x1fe414u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1fe418:
    // 0x1fe418: 0x8eb0f4f4  lw          $s0, -0xB0C($s5)
    ctx->pc = 0x1fe418u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294964468)));
    // 0x1fe41c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fe41cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe420: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1fe420u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe424: 0xc13a798  jal         func_4E9E60
    ctx->pc = 0x1FE424u;
    SET_GPR_U32(ctx, 31, 0x1FE42Cu);
    ctx->pc = 0x1FE428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE424u;
    // 0x1fe428: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E9E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E9E60u, 0x1FE424u, 0x1FE42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE42Cu;
label_1fe42c:
    // 0x1fe42c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1fe42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1fe430: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fe430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe434: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1fe434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe438: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FE438u;
    {
        const bool branch_taken_0x1fe438 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FE43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE438u;
        // 0x1fe43c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe438) {
            ctx->pc = 0x1FE454u;
            goto label_1fe454;
        }
    }
    ctx->pc = 0x1FE440u;
    // 0x1fe440: 0x94630010  lhu         $v1, 0x10($v1)
    ctx->pc = 0x1fe440u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1fe444: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x1fe444u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fe448: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1fe448u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1fe44c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FE44Cu;
    {
        const bool branch_taken_0x1fe44c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe44c) {
            ctx->pc = 0x1FE458u;
            goto label_1fe458;
        }
    }
    ctx->pc = 0x1FE454u;
label_1fe454:
    // 0x1fe454: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fe454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fe458:
    // 0x1fe458: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x1FE458u;
    {
        const bool branch_taken_0x1fe458 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE458u;
        // 0x1fe45c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe458) {
            ctx->pc = 0x1FE490u;
            goto label_1fe490;
        }
    }
    ctx->pc = 0x1FE460u;
    // 0x1fe460: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x1fe460u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fe464: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1fe464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe468: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1fe468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1fe46c: 0xa7a20040  sh          $v0, 0x40($sp)
    ctx->pc = 0x1fe46cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 64), (uint16_t)GPR_U32(ctx, 2));
    // 0x1fe470: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1fe470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fe474: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x1fe474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    // 0x1fe478: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1fe478u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1fe47c: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x1fe47cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x1fe480: 0xc13a8f2  jal         func_4EA3C8
    ctx->pc = 0x1FE480u;
    SET_GPR_U32(ctx, 31, 0x1FE488u);
    ctx->pc = 0x1FE484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE480u;
    // 0x1fe484: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EA3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EA3C8u, 0x1FE480u, 0x1FE488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE488u;
label_1fe488:
    // 0x1fe488: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1fe488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe48c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1fe48cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1fe490:
    // 0x1fe490: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1fe490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe494: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1fe494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1fe498: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FE498u;
    {
        const bool branch_taken_0x1fe498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE498u;
        // 0x1fe49c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe498) {
            ctx->pc = 0x1FE4B4u;
            goto label_1fe4b4;
        }
    }
    ctx->pc = 0x1FE4A0u;
    // 0x1fe4a0: 0x90420010  lbu         $v0, 0x10($v0)
    ctx->pc = 0x1fe4a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1fe4a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fe4a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fe4a8: 0x0  nop
    ctx->pc = 0x1fe4a8u;
    // NOP
    // 0x1fe4ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fe4acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1fe4b0: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1fe4b0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1fe4b4:
    // 0x1fe4b4: 0x272102b  sltu        $v0, $s3, $s2
    ctx->pc = 0x1fe4b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1fe4b8: 0x1040ffd7  beqz        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1FE4B8u;
    {
        const bool branch_taken_0x1fe4b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE4B8u;
        // 0x1fe4bc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe4b8) {
            ctx->pc = 0x1FE418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe418;
        }
    }
    ctx->pc = 0x1FE4C0u;
label_1fe4c0:
    // 0x1fe4c0: 0x2741023  subu        $v0, $s3, $s4
    ctx->pc = 0x1fe4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x1fe4c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fe4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fe4c8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FE4C8u;
    {
        const bool branch_taken_0x1fe4c8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1FE4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE4C8u;
        // 0x1fe4cc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe4c8) {
            ctx->pc = 0x1FE4E4u;
            goto label_1fe4e4;
        }
    }
    ctx->pc = 0x1FE4D0u;
    // 0x1fe4d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fe4d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fe4d4: 0x0  nop
    ctx->pc = 0x1fe4d4u;
    // NOP
    // 0x1fe4d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fe4d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1fe4dc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1FE4DCu;
    {
        const bool branch_taken_0x1fe4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe4dc) {
            ctx->pc = 0x1FE4FCu;
            goto label_1fe4fc;
        }
    }
    ctx->pc = 0x1FE4E4u;
label_1fe4e4:
    // 0x1fe4e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fe4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1fe4e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1fe4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1fe4ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fe4ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fe4f0: 0x0  nop
    ctx->pc = 0x1fe4f0u;
    // NOP
    // 0x1fe4f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fe4f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1fe4f8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1fe4f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1fe4fc:
    // 0x1fe4fc: 0x0  nop
    ctx->pc = 0x1fe4fcu;
    // NOP
    // 0x1fe500: 0x0  nop
    ctx->pc = 0x1fe500u;
    // NOP
    // 0x1fe504: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x1fe504u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x1fe508: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1fe508u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1fe50c: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x1fe50cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fe510: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x1fe510u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1fe514: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x1fe514u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1fe518: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x1fe518u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fe51c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1fe51cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fe520: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1fe520u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1fe524: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1fe524u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1fe528: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1fe528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1fe52c: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x1fe52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1fe530: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fe530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fe534: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE534u;
        // 0x1fe538: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE53Cu;
    // 0x1fe53c: 0x0  nop
    ctx->pc = 0x1fe53cu;
    // NOP
    // 0x1fe540: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1fe540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1fe544: 0x0  nop
    ctx->pc = 0x1fe544u;
    // NOP
    ctx->pc = 0x1fe548u;
}
