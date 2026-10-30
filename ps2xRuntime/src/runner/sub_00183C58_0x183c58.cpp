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

// Function: sub_00183C58
// Address: 0x183c58 - 0x183f48
void sub_00183C58_0x183c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183C58_0x183c58");
#endif

    switch (ctx->pc) {
        case 0x183c90u: goto label_183c90;
        case 0x183cacu: goto label_183cac;
        case 0x183cc8u: goto label_183cc8;
        case 0x183ce0u: goto label_183ce0;
        case 0x183cf8u: goto label_183cf8;
        case 0x183d14u: goto label_183d14;
        case 0x183d2cu: goto label_183d2c;
        case 0x183d60u: goto label_183d60;
        case 0x183d80u: goto label_183d80;
        case 0x183d94u: goto label_183d94;
        case 0x183dacu: goto label_183dac;
        case 0x183dc0u: goto label_183dc0;
        case 0x183dd8u: goto label_183dd8;
        case 0x183decu: goto label_183dec;
        case 0x183e04u: goto label_183e04;
        case 0x183e08u: goto label_183e08;
        case 0x183e20u: goto label_183e20;
        case 0x183e3cu: goto label_183e3c;
        case 0x183e58u: goto label_183e58;
        case 0x183e68u: goto label_183e68;
        case 0x183e80u: goto label_183e80;
        case 0x183e9cu: goto label_183e9c;
        case 0x183eb8u: goto label_183eb8;
        case 0x183ed8u: goto label_183ed8;
        default: break;
    }

    ctx->pc = 0x183c58u;

    // 0x183c58: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x183c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x183c5c: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x183c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x183c60: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x183c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x183c64: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x183c64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183c68: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x183c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x183c6c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x183c6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183c70: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x183c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
    // 0x183c74: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x183c74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183c78: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x183c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
    // 0x183c7c: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x183c7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183c80: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x183c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
    // 0x183c84: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x183c84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183c88: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x183c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x183c8c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x183c8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_183c90:
    // 0x183c90: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x183c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x183c94: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x183C94u;
    {
        const bool branch_taken_0x183c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183C94u;
        // 0x183c98: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183c94) {
            ctx->pc = 0x183CE8u;
            goto label_183ce8;
        }
    }
    ctx->pc = 0x183C9Cu;
    // 0x183c9c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x183c9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x183ca0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x183ca0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x183ca4: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x183CA4u;
    SET_GPR_U32(ctx, 31, 0x183CACu);
    ctx->pc = 0x183CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183CA4u;
    // 0x183ca8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x183CA4u, 0x183CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183CACu;
label_183cac:
    // 0x183cac: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x183cacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x183cb0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x183cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x183cb4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x183cb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x183cb8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x183cb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x183cbc: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x183cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x183cc0: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x183CC0u;
    SET_GPR_U32(ctx, 31, 0x183CC8u);
    ctx->pc = 0x183CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183CC0u;
    // 0x183cc4: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x183CC0u, 0x183CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183CC8u;
label_183cc8:
    // 0x183cc8: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x183cc8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x183ccc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x183cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x183cd0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x183cd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183cd4: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x183cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x183cd8: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x183CD8u;
    SET_GPR_U32(ctx, 31, 0x183CE0u);
    ctx->pc = 0x183CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183CD8u;
    // 0x183cdc: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x183CD8u, 0x183CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183CE0u;
label_183ce0:
    // 0x183ce0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x183CE0u;
    {
        const bool branch_taken_0x183ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183CE0u;
        // 0x183ce4: 0x7ba200b0  lq          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183ce0) {
            ctx->pc = 0x183D30u;
            goto label_183d30;
        }
    }
    ctx->pc = 0x183CE8u;
label_183ce8:
    // 0x183ce8: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x183ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x183cec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x183cecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x183cf0: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x183CF0u;
    SET_GPR_U32(ctx, 31, 0x183CF8u);
    ctx->pc = 0x183CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183CF0u;
    // 0x183cf4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x183CF0u, 0x183CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183CF8u;
label_183cf8:
    // 0x183cf8: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x183cf8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x183cfc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x183cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x183d00: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x183d00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x183d04: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x183d04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x183d08: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x183d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x183d0c: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x183D0Cu;
    SET_GPR_U32(ctx, 31, 0x183D14u);
    ctx->pc = 0x183D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183D0Cu;
    // 0x183d10: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x183D0Cu, 0x183D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183D14u;
label_183d14:
    // 0x183d14: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x183d14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x183d18: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x183d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x183d1c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x183d1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183d20: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x183d20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x183d24: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x183D24u;
    SET_GPR_U32(ctx, 31, 0x183D2Cu);
    ctx->pc = 0x183D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183D24u;
    // 0x183d28: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x183D24u, 0x183D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183D2Cu;
label_183d2c:
    // 0x183d2c: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x183d2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_183d30:
    // 0x183d30: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x183d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x183d34: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x183d34u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x183d38: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x183d38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x183d3c: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x183d3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x183d40: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x183D40u;
    {
        const bool branch_taken_0x183d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x183D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183D40u;
        // 0x183d44: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183d40) {
            ctx->pc = 0x183C90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_183c90;
        }
    }
    ctx->pc = 0x183D48u;
    // 0x183d48: 0x26500010  addiu       $s0, $s2, 0x10
    ctx->pc = 0x183d48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x183d4c: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x183d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x183d50: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x183d50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x183d54: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x183d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x183d58: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x183D58u;
    SET_GPR_U32(ctx, 31, 0x183D60u);
    ctx->pc = 0x183D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183D58u;
    // 0x183d5c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x183D58u, 0x183D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183D60u;
label_183d60:
    // 0x183d60: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x183d60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x183d64: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x183d64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x183d68: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x183d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183d6c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x183d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183d70: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x183d70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x183d74: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x183d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x183d78: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x183D78u;
    SET_GPR_U32(ctx, 31, 0x183D80u);
    ctx->pc = 0x183D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183D78u;
    // 0x183d7c: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x183D78u, 0x183D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183D80u;
label_183d80:
    // 0x183d80: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x183d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x183d84: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x183d84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x183d88: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x183d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x183d8c: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x183D8Cu;
    SET_GPR_U32(ctx, 31, 0x183D94u);
    ctx->pc = 0x183D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183D8Cu;
    // 0x183d90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x183D8Cu, 0x183D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183D94u;
label_183d94:
    // 0x183d94: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x183d94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x183d98: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x183d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x183d9c: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x183d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x183da0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x183da0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183da4: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x183DA4u;
    SET_GPR_U32(ctx, 31, 0x183DACu);
    ctx->pc = 0x183DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183DA4u;
    // 0x183da8: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x183DA4u, 0x183DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183DACu;
label_183dac:
    // 0x183dac: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x183dacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x183db0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x183db0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x183db4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x183db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x183db8: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x183DB8u;
    SET_GPR_U32(ctx, 31, 0x183DC0u);
    ctx->pc = 0x183DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183DB8u;
    // 0x183dbc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x183DB8u, 0x183DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183DC0u;
label_183dc0:
    // 0x183dc0: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x183dc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x183dc4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x183dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x183dc8: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x183dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x183dcc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x183dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183dd0: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x183DD0u;
    SET_GPR_U32(ctx, 31, 0x183DD8u);
    ctx->pc = 0x183DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183DD0u;
    // 0x183dd4: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x183DD0u, 0x183DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183DD8u;
label_183dd8:
    // 0x183dd8: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x183dd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x183ddc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x183ddcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x183de0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x183de0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183de4: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x183DE4u;
    SET_GPR_U32(ctx, 31, 0x183DECu);
    ctx->pc = 0x183DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183DE4u;
    // 0x183de8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x183DE4u, 0x183DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183DECu;
label_183dec:
    // 0x183dec: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x183decu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x183df0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x183df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x183df4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x183df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183df8: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x183df8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x183dfc: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x183DFCu;
    SET_GPR_U32(ctx, 31, 0x183E04u);
    ctx->pc = 0x183E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183DFCu;
    // 0x183e00: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x183DFCu, 0x183E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183E04u;
label_183e04:
    // 0x183e04: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x183e04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_183e08:
    // 0x183e08: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x183e08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x183e0c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x183e0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x183e10: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x183e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x183e14: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x183e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183e18: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x183E18u;
    SET_GPR_U32(ctx, 31, 0x183E20u);
    ctx->pc = 0x183E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183E18u;
    // 0x183e1c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x183E18u, 0x183E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183E20u;
label_183e20:
    // 0x183e20: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x183e20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x183e24: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x183e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x183e28: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x183e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x183e2c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x183e2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x183e30: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x183e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x183e34: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x183E34u;
    SET_GPR_U32(ctx, 31, 0x183E3Cu);
    ctx->pc = 0x183E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183E34u;
    // 0x183e38: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x183E34u, 0x183E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183E3Cu;
label_183e3c:
    // 0x183e3c: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x183e3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x183e40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183e44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x183e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183e48: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x183e48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x183e4c: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x183e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x183e50: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x183E50u;
    SET_GPR_U32(ctx, 31, 0x183E58u);
    ctx->pc = 0x183E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183E50u;
    // 0x183e54: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x183E50u, 0x183E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183E58u;
label_183e58:
    // 0x183e58: 0x621ffeb  bgez        $s1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x183E58u;
    {
        const bool branch_taken_0x183e58 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x183e58) {
            ctx->pc = 0x183E08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_183e08;
        }
    }
    ctx->pc = 0x183E60u;
    // 0x183e60: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x183e60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x183e64: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x183e64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_183e68:
    // 0x183e68: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x183e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x183e6c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x183e6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x183e70: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x183e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x183e74: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x183e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183e78: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x183E78u;
    SET_GPR_U32(ctx, 31, 0x183E80u);
    ctx->pc = 0x183E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183E78u;
    // 0x183e7c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x183E78u, 0x183E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183E80u;
label_183e80:
    // 0x183e80: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x183e80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x183e84: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x183e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x183e88: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x183e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x183e8c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x183e8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x183e90: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x183e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x183e94: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x183E94u;
    SET_GPR_U32(ctx, 31, 0x183E9Cu);
    ctx->pc = 0x183E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183E94u;
    // 0x183e98: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x183E94u, 0x183E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183E9Cu;
label_183e9c:
    // 0x183e9c: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x183e9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x183ea0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183ea4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x183ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183ea8: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x183ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x183eac: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x183eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x183eb0: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x183EB0u;
    SET_GPR_U32(ctx, 31, 0x183EB8u);
    ctx->pc = 0x183EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183EB0u;
    // 0x183eb4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x183EB0u, 0x183EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183EB8u;
label_183eb8:
    // 0x183eb8: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x183eb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x183ebc: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x183EBCu;
    {
        const bool branch_taken_0x183ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x183EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183EBCu;
        // 0x183ec0: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183ebc) {
            ctx->pc = 0x183E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_183e68;
        }
    }
    ctx->pc = 0x183EC4u;
    // 0x183ec4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x183ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x183ec8: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x183ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x183ecc: 0x7ea20000  sq          $v0, 0x0($s5)
    ctx->pc = 0x183eccu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 2));
    // 0x183ed0: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x183ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
    // 0x183ed4: 0x0  nop
    ctx->pc = 0x183ed4u;
    // NOP
label_183ed8:
    // 0x183ed8: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x183ed8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x183edc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x183edcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x183ee0: 0x7aa30000  lq          $v1, 0x0($s5)
    ctx->pc = 0x183ee0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x183ee4: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x183ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x183ee8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x183ee8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x183eec: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x183eecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x183ef0: 0x4bc208af  vmini.xyz   $vf2, $vf1, $vf2
    ctx->pc = 0x183ef0u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x183ef4: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x183ef4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x183ef8: 0x7ea30000  sq          $v1, 0x0($s5)
    ctx->pc = 0x183ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 3));
    // 0x183efc: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x183efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
    // 0x183f00: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x183f00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x183f04: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x183f04u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x183f08: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x183f08u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x183f0c: 0x4bc208ab  vmax.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x183f0cu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x183f10: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x183f10u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x183f14: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x183f14u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
    // 0x183f18: 0x4c1ffef  bgez        $a2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x183F18u;
    {
        const bool branch_taken_0x183f18 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x183F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183F18u;
        // 0x183f1c: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183f18) {
            ctx->pc = 0x183ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_183ed8;
        }
    }
    ctx->pc = 0x183F20u;
    // 0x183f20: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x183f20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x183f24: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x183f24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x183f28: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x183f28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x183f2c: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x183f2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x183f30: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x183f30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x183f34: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x183f34u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x183f38: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x183f38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x183f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x183F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183F3Cu;
        // 0x183f40: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183F3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183F44u;
    // 0x183f44: 0x0  nop
    ctx->pc = 0x183f44u;
    // NOP
    ctx->pc = 0x183f48u;
}
