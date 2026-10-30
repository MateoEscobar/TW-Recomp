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

// Function: sub_0036B220
// Address: 0x36b220 - 0x36b4c0
void sub_0036B220_0x36b220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036B220_0x36b220");
#endif

    switch (ctx->pc) {
        case 0x36b26cu: goto label_36b26c;
        case 0x36b274u: goto label_36b274;
        case 0x36b288u: goto label_36b288;
        case 0x36b29cu: goto label_36b29c;
        case 0x36b2b0u: goto label_36b2b0;
        case 0x36b2c4u: goto label_36b2c4;
        case 0x36b2d8u: goto label_36b2d8;
        case 0x36b2e0u: goto label_36b2e0;
        case 0x36b2f4u: goto label_36b2f4;
        case 0x36b2fcu: goto label_36b2fc;
        case 0x36b310u: goto label_36b310;
        case 0x36b318u: goto label_36b318;
        case 0x36b32cu: goto label_36b32c;
        case 0x36b334u: goto label_36b334;
        case 0x36b348u: goto label_36b348;
        case 0x36b350u: goto label_36b350;
        case 0x36b364u: goto label_36b364;
        case 0x36b36cu: goto label_36b36c;
        case 0x36b380u: goto label_36b380;
        case 0x36b388u: goto label_36b388;
        case 0x36b39cu: goto label_36b39c;
        case 0x36b3a4u: goto label_36b3a4;
        case 0x36b3b8u: goto label_36b3b8;
        case 0x36b3c0u: goto label_36b3c0;
        case 0x36b3d4u: goto label_36b3d4;
        case 0x36b3dcu: goto label_36b3dc;
        case 0x36b3f0u: goto label_36b3f0;
        case 0x36b3f8u: goto label_36b3f8;
        case 0x36b40cu: goto label_36b40c;
        case 0x36b414u: goto label_36b414;
        case 0x36b428u: goto label_36b428;
        case 0x36b430u: goto label_36b430;
        case 0x36b47cu: goto label_36b47c;
        default: break;
    }

    ctx->pc = 0x36b220u;

    // 0x36b220: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x36b220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x36b224: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36b224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36b228: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x36b228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x36b22c: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x36b22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x36b230: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36b230u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b234: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x36b234u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b238: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x36b238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x36b23c: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x36b23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x36b240: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36b240u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b244: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x36b244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x36b248: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x36b248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x36b24c: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x36b24cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x36b250: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x36b250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x36b254: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x36b254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
    // 0x36b258: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x36b258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x36b25c: 0xe7b60110  swc1        $f22, 0x110($sp)
    ctx->pc = 0x36b25cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x36b260: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x36b260u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x36b264: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36B264u;
    SET_GPR_U32(ctx, 31, 0x36B26Cu);
    ctx->pc = 0x36B268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B264u;
    // 0x36b268: 0xe7b40100  swc1        $f20, 0x100($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36B264u, 0x36B26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B26Cu;
label_36b26c:
    // 0x36b26c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36B26Cu;
    SET_GPR_U32(ctx, 31, 0x36B274u);
    ctx->pc = 0x36B270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B26Cu;
    // 0x36b270: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36B26Cu, 0x36B274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B274u;
label_36b274:
    // 0x36b274: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x36b274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x36b278: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36b278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b27c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36b27cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36b280: 0xc102488  jal         func_409220
    ctx->pc = 0x36B280u;
    SET_GPR_U32(ctx, 31, 0x36B288u);
    ctx->pc = 0x36B284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B280u;
    // 0x36b284: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36B280u, 0x36B288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B288u;
label_36b288:
    // 0x36b288: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x36b288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x36b28c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36b28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b290: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36b290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36b294: 0xc102488  jal         func_409220
    ctx->pc = 0x36B294u;
    SET_GPR_U32(ctx, 31, 0x36B29Cu);
    ctx->pc = 0x36B298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B294u;
    // 0x36b298: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36B294u, 0x36B29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B29Cu;
label_36b29c:
    // 0x36b29c: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x36b29cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x36b2a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36b2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b2a4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x36b2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36b2a8: 0xc102488  jal         func_409220
    ctx->pc = 0x36B2A8u;
    SET_GPR_U32(ctx, 31, 0x36B2B0u);
    ctx->pc = 0x36B2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B2A8u;
    // 0x36b2ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36B2A8u, 0x36B2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B2B0u;
label_36b2b0:
    // 0x36b2b0: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x36b2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x36b2b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36b2b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b2b8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x36b2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36b2bc: 0xc102488  jal         func_409220
    ctx->pc = 0x36B2BCu;
    SET_GPR_U32(ctx, 31, 0x36B2C4u);
    ctx->pc = 0x36B2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B2BCu;
    // 0x36b2c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36B2BCu, 0x36B2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B2C4u;
label_36b2c4:
    // 0x36b2c4: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x36b2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x36b2c8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36b2c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b2cc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x36b2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x36b2d0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36B2D0u;
    SET_GPR_U32(ctx, 31, 0x36B2D8u);
    ctx->pc = 0x36B2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B2D0u;
    // 0x36b2d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36B2D0u, 0x36B2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B2D8u;
label_36b2d8:
    // 0x36b2d8: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36B2D8u;
    SET_GPR_U32(ctx, 31, 0x36B2E0u);
    ctx->pc = 0x36B2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B2D8u;
    // 0x36b2dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36B2D8u, 0x36B2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B2E0u;
label_36b2e0:
    // 0x36b2e0: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x36b2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x36b2e4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36b2e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b2e8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x36b2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x36b2ec: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36B2ECu;
    SET_GPR_U32(ctx, 31, 0x36B2F4u);
    ctx->pc = 0x36B2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B2ECu;
    // 0x36b2f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36B2ECu, 0x36B2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B2F4u;
label_36b2f4:
    // 0x36b2f4: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36B2F4u;
    SET_GPR_U32(ctx, 31, 0x36B2FCu);
    ctx->pc = 0x36B2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B2F4u;
    // 0x36b2f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36B2F4u, 0x36B2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B2FCu;
label_36b2fc:
    // 0x36b2fc: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x36b2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x36b300: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36b300u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b304: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x36b304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x36b308: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36B308u;
    SET_GPR_U32(ctx, 31, 0x36B310u);
    ctx->pc = 0x36B30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B308u;
    // 0x36b30c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36B308u, 0x36B310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B310u;
label_36b310:
    // 0x36b310: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36B310u;
    SET_GPR_U32(ctx, 31, 0x36B318u);
    ctx->pc = 0x36B314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B310u;
    // 0x36b314: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36B310u, 0x36B318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B318u;
label_36b318:
    // 0x36b318: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36b318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b31c: 0x305e00ff  andi        $fp, $v0, 0xFF
    ctx->pc = 0x36b31cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36b320: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x36b320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x36b324: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36B324u;
    SET_GPR_U32(ctx, 31, 0x36B32Cu);
    ctx->pc = 0x36B328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B324u;
    // 0x36b328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36B324u, 0x36B32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B32Cu;
label_36b32c:
    // 0x36b32c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36B32Cu;
    SET_GPR_U32(ctx, 31, 0x36B334u);
    ctx->pc = 0x36B330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B32Cu;
    // 0x36b330: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36B32Cu, 0x36B334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B334u;
label_36b334:
    // 0x36b334: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36b334u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b338: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x36b338u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36b33c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x36b33cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x36b340: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36B340u;
    SET_GPR_U32(ctx, 31, 0x36B348u);
    ctx->pc = 0x36B344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B340u;
    // 0x36b344: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36B340u, 0x36B348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B348u;
label_36b348:
    // 0x36b348: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36B348u;
    SET_GPR_U32(ctx, 31, 0x36B350u);
    ctx->pc = 0x36B34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B348u;
    // 0x36b34c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36B348u, 0x36B350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B350u;
label_36b350:
    // 0x36b350: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36b350u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b354: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x36b354u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36b358: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x36b358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x36b35c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36B35Cu;
    SET_GPR_U32(ctx, 31, 0x36B364u);
    ctx->pc = 0x36B360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B35Cu;
    // 0x36b360: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36B35Cu, 0x36B364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B364u;
label_36b364:
    // 0x36b364: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36B364u;
    SET_GPR_U32(ctx, 31, 0x36B36Cu);
    ctx->pc = 0x36B368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B364u;
    // 0x36b368: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36B364u, 0x36B36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B36Cu;
label_36b36c:
    // 0x36b36c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36b36cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b370: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x36b370u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36b374: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x36b374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x36b378: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36B378u;
    SET_GPR_U32(ctx, 31, 0x36B380u);
    ctx->pc = 0x36B37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B378u;
    // 0x36b37c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36B378u, 0x36B380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B380u;
label_36b380:
    // 0x36b380: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36B380u;
    SET_GPR_U32(ctx, 31, 0x36B388u);
    ctx->pc = 0x36B384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B380u;
    // 0x36b384: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36B380u, 0x36B388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B388u;
label_36b388:
    // 0x36b388: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36b388u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b38c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x36b38cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b390: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x36b390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x36b394: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36B394u;
    SET_GPR_U32(ctx, 31, 0x36B39Cu);
    ctx->pc = 0x36B398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B394u;
    // 0x36b398: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36B394u, 0x36B39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B39Cu;
label_36b39c:
    // 0x36b39c: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36B39Cu;
    SET_GPR_U32(ctx, 31, 0x36B3A4u);
    ctx->pc = 0x36B3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B39Cu;
    // 0x36b3a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36B39Cu, 0x36B3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B3A4u;
label_36b3a4:
    // 0x36b3a4: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x36b3a4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x36b3a8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36b3a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b3ac: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x36b3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x36b3b0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36B3B0u;
    SET_GPR_U32(ctx, 31, 0x36B3B8u);
    ctx->pc = 0x36B3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B3B0u;
    // 0x36b3b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36B3B0u, 0x36B3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B3B8u;
label_36b3b8:
    // 0x36b3b8: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36B3B8u;
    SET_GPR_U32(ctx, 31, 0x36B3C0u);
    ctx->pc = 0x36B3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B3B8u;
    // 0x36b3bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36B3B8u, 0x36B3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B3C0u;
label_36b3c0:
    // 0x36b3c0: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x36b3c0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x36b3c4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36b3c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b3c8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x36b3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x36b3cc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36B3CCu;
    SET_GPR_U32(ctx, 31, 0x36B3D4u);
    ctx->pc = 0x36B3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B3CCu;
    // 0x36b3d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36B3CCu, 0x36B3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B3D4u;
label_36b3d4:
    // 0x36b3d4: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36B3D4u;
    SET_GPR_U32(ctx, 31, 0x36B3DCu);
    ctx->pc = 0x36B3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B3D4u;
    // 0x36b3d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36B3D4u, 0x36B3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B3DCu;
label_36b3dc:
    // 0x36b3dc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x36b3dcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x36b3e0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36b3e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b3e4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x36b3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x36b3e8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36B3E8u;
    SET_GPR_U32(ctx, 31, 0x36B3F0u);
    ctx->pc = 0x36B3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B3E8u;
    // 0x36b3ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36B3E8u, 0x36B3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B3F0u;
label_36b3f0:
    // 0x36b3f0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36B3F0u;
    SET_GPR_U32(ctx, 31, 0x36B3F8u);
    ctx->pc = 0x36B3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B3F0u;
    // 0x36b3f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36B3F0u, 0x36B3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B3F8u;
label_36b3f8:
    // 0x36b3f8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36b3f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b3fc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x36b3fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b400: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x36b400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x36b404: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36B404u;
    SET_GPR_U32(ctx, 31, 0x36B40Cu);
    ctx->pc = 0x36B408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B404u;
    // 0x36b408: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36B404u, 0x36B40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B40Cu;
label_36b40c:
    // 0x36b40c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36B40Cu;
    SET_GPR_U32(ctx, 31, 0x36B414u);
    ctx->pc = 0x36B410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B40Cu;
    // 0x36b410: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36B40Cu, 0x36B414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B414u;
label_36b414:
    // 0x36b414: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36b414u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b418: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x36b418u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36b41c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36b41cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b420: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36B420u;
    SET_GPR_U32(ctx, 31, 0x36B428u);
    ctx->pc = 0x36B424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B420u;
    // 0x36b424: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36B420u, 0x36B428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B428u;
label_36b428:
    // 0x36b428: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36B428u;
    SET_GPR_U32(ctx, 31, 0x36B430u);
    ctx->pc = 0x36B42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B428u;
    // 0x36b42c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36B428u, 0x36B430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B430u;
label_36b430:
    // 0x36b430: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x36b430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36b434: 0x3c0582d  daddu       $t3, $fp, $zero
    ctx->pc = 0x36b434u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b438: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x36b438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x36b43c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x36b43cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x36b440: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x36b440u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36b444: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x36b444u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x36b448: 0x8fa7004c  lw          $a3, 0x4C($sp)
    ctx->pc = 0x36b448u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x36b44c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x36b44cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x36b450: 0x8fa80050  lw          $t0, 0x50($sp)
    ctx->pc = 0x36b450u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36b454: 0x8fa90054  lw          $t1, 0x54($sp)
    ctx->pc = 0x36b454u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x36b458: 0x8faa0058  lw          $t2, 0x58($sp)
    ctx->pc = 0x36b458u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36b45c: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x36b45cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x36b460: 0xafb70000  sw          $s7, 0x0($sp)
    ctx->pc = 0x36b460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 23));
    // 0x36b464: 0xafb60008  sw          $s6, 0x8($sp)
    ctx->pc = 0x36b464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 22));
    // 0x36b468: 0xafb50010  sw          $s5, 0x10($sp)
    ctx->pc = 0x36b468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 21));
    // 0x36b46c: 0xafb40018  sw          $s4, 0x18($sp)
    ctx->pc = 0x36b46cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 20));
    // 0x36b470: 0xafb30020  sw          $s3, 0x20($sp)
    ctx->pc = 0x36b470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 19));
    // 0x36b474: 0xc107544  jal         func_41D510
    ctx->pc = 0x36B474u;
    SET_GPR_U32(ctx, 31, 0x36B47Cu);
    ctx->pc = 0x36B478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B474u;
    // 0x36b478: 0xafb20028  sw          $s2, 0x28($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D510u, 0x36B474u, 0x36B47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B47Cu;
label_36b47c:
    // 0x36b47c: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x36b47cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x36b480: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36b480u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b484: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x36b484u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x36b488: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x36b488u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x36b48c: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x36b48cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x36b490: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x36b490u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x36b494: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x36b494u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x36b498: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x36b498u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x36b49c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x36b49cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x36b4a0: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x36b4a0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x36b4a4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x36b4a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x36b4a8: 0xc7b60110  lwc1        $f22, 0x110($sp)
    ctx->pc = 0x36b4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x36b4ac: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x36b4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x36b4b0: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x36b4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36b4b4: 0x3e00008  jr          $ra
    ctx->pc = 0x36B4B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36B4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B4B4u;
        // 0x36b4b8: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B4B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36B4BCu;
    // 0x36b4bc: 0x0  nop
    ctx->pc = 0x36b4bcu;
    // NOP
    ctx->pc = 0x36b4c0u;
}
