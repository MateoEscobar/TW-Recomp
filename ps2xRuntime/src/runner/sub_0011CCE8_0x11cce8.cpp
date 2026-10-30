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

// Function: sub_0011CCE8
// Address: 0x11cce8 - 0x11cf70
void sub_0011CCE8_0x11cce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011CCE8_0x11cce8");
#endif

    switch (ctx->pc) {
        case 0x11cce8u: goto label_11cce8;
        case 0x11ccecu: goto label_11ccec;
        case 0x11ccf0u: goto label_11ccf0;
        case 0x11ccf4u: goto label_11ccf4;
        case 0x11ccf8u: goto label_11ccf8;
        case 0x11ccfcu: goto label_11ccfc;
        case 0x11cd00u: goto label_11cd00;
        case 0x11cd04u: goto label_11cd04;
        case 0x11cd08u: goto label_11cd08;
        case 0x11cd0cu: goto label_11cd0c;
        case 0x11cd10u: goto label_11cd10;
        case 0x11cd14u: goto label_11cd14;
        case 0x11cd18u: goto label_11cd18;
        case 0x11cd1cu: goto label_11cd1c;
        case 0x11cd20u: goto label_11cd20;
        case 0x11cd24u: goto label_11cd24;
        case 0x11cd28u: goto label_11cd28;
        case 0x11cd2cu: goto label_11cd2c;
        case 0x11cd30u: goto label_11cd30;
        case 0x11cd34u: goto label_11cd34;
        case 0x11cd38u: goto label_11cd38;
        case 0x11cd3cu: goto label_11cd3c;
        case 0x11cd40u: goto label_11cd40;
        case 0x11cd44u: goto label_11cd44;
        case 0x11cd48u: goto label_11cd48;
        case 0x11cd4cu: goto label_11cd4c;
        case 0x11cd50u: goto label_11cd50;
        case 0x11cd54u: goto label_11cd54;
        case 0x11cd58u: goto label_11cd58;
        case 0x11cd5cu: goto label_11cd5c;
        case 0x11cd60u: goto label_11cd60;
        case 0x11cd64u: goto label_11cd64;
        case 0x11cd68u: goto label_11cd68;
        case 0x11cd6cu: goto label_11cd6c;
        case 0x11cd70u: goto label_11cd70;
        case 0x11cd74u: goto label_11cd74;
        case 0x11cd78u: goto label_11cd78;
        case 0x11cd7cu: goto label_11cd7c;
        case 0x11cd80u: goto label_11cd80;
        case 0x11cd84u: goto label_11cd84;
        case 0x11cd88u: goto label_11cd88;
        case 0x11cd8cu: goto label_11cd8c;
        case 0x11cd90u: goto label_11cd90;
        case 0x11cd94u: goto label_11cd94;
        case 0x11cd98u: goto label_11cd98;
        case 0x11cd9cu: goto label_11cd9c;
        case 0x11cda0u: goto label_11cda0;
        case 0x11cda4u: goto label_11cda4;
        case 0x11cda8u: goto label_11cda8;
        case 0x11cdacu: goto label_11cdac;
        case 0x11cdb0u: goto label_11cdb0;
        case 0x11cdb4u: goto label_11cdb4;
        case 0x11cdb8u: goto label_11cdb8;
        case 0x11cdbcu: goto label_11cdbc;
        case 0x11cdc0u: goto label_11cdc0;
        case 0x11cdc4u: goto label_11cdc4;
        case 0x11cdc8u: goto label_11cdc8;
        case 0x11cdccu: goto label_11cdcc;
        case 0x11cdd0u: goto label_11cdd0;
        case 0x11cdd4u: goto label_11cdd4;
        case 0x11cdd8u: goto label_11cdd8;
        case 0x11cddcu: goto label_11cddc;
        case 0x11cde0u: goto label_11cde0;
        case 0x11cde4u: goto label_11cde4;
        case 0x11cde8u: goto label_11cde8;
        case 0x11cdecu: goto label_11cdec;
        case 0x11cdf0u: goto label_11cdf0;
        case 0x11cdf4u: goto label_11cdf4;
        case 0x11cdf8u: goto label_11cdf8;
        case 0x11cdfcu: goto label_11cdfc;
        case 0x11ce00u: goto label_11ce00;
        case 0x11ce04u: goto label_11ce04;
        case 0x11ce08u: goto label_11ce08;
        case 0x11ce0cu: goto label_11ce0c;
        case 0x11ce10u: goto label_11ce10;
        case 0x11ce14u: goto label_11ce14;
        case 0x11ce18u: goto label_11ce18;
        case 0x11ce1cu: goto label_11ce1c;
        case 0x11ce20u: goto label_11ce20;
        case 0x11ce24u: goto label_11ce24;
        case 0x11ce28u: goto label_11ce28;
        case 0x11ce2cu: goto label_11ce2c;
        case 0x11ce30u: goto label_11ce30;
        case 0x11ce34u: goto label_11ce34;
        case 0x11ce38u: goto label_11ce38;
        case 0x11ce3cu: goto label_11ce3c;
        case 0x11ce40u: goto label_11ce40;
        case 0x11ce44u: goto label_11ce44;
        case 0x11ce48u: goto label_11ce48;
        case 0x11ce4cu: goto label_11ce4c;
        case 0x11ce50u: goto label_11ce50;
        case 0x11ce54u: goto label_11ce54;
        case 0x11ce58u: goto label_11ce58;
        case 0x11ce5cu: goto label_11ce5c;
        case 0x11ce60u: goto label_11ce60;
        case 0x11ce64u: goto label_11ce64;
        case 0x11ce68u: goto label_11ce68;
        case 0x11ce6cu: goto label_11ce6c;
        case 0x11ce70u: goto label_11ce70;
        case 0x11ce74u: goto label_11ce74;
        case 0x11ce78u: goto label_11ce78;
        case 0x11ce7cu: goto label_11ce7c;
        case 0x11ce80u: goto label_11ce80;
        case 0x11ce84u: goto label_11ce84;
        case 0x11ce88u: goto label_11ce88;
        case 0x11ce8cu: goto label_11ce8c;
        case 0x11ce90u: goto label_11ce90;
        case 0x11ce94u: goto label_11ce94;
        case 0x11ce98u: goto label_11ce98;
        case 0x11ce9cu: goto label_11ce9c;
        case 0x11cea0u: goto label_11cea0;
        case 0x11cea4u: goto label_11cea4;
        case 0x11cea8u: goto label_11cea8;
        case 0x11ceacu: goto label_11ceac;
        case 0x11ceb0u: goto label_11ceb0;
        case 0x11ceb4u: goto label_11ceb4;
        case 0x11ceb8u: goto label_11ceb8;
        case 0x11cebcu: goto label_11cebc;
        case 0x11cec0u: goto label_11cec0;
        case 0x11cec4u: goto label_11cec4;
        case 0x11cec8u: goto label_11cec8;
        case 0x11ceccu: goto label_11cecc;
        case 0x11ced0u: goto label_11ced0;
        case 0x11ced4u: goto label_11ced4;
        case 0x11ced8u: goto label_11ced8;
        case 0x11cedcu: goto label_11cedc;
        case 0x11cee0u: goto label_11cee0;
        case 0x11cee4u: goto label_11cee4;
        case 0x11cee8u: goto label_11cee8;
        case 0x11ceecu: goto label_11ceec;
        case 0x11cef0u: goto label_11cef0;
        case 0x11cef4u: goto label_11cef4;
        case 0x11cef8u: goto label_11cef8;
        case 0x11cefcu: goto label_11cefc;
        case 0x11cf00u: goto label_11cf00;
        case 0x11cf04u: goto label_11cf04;
        case 0x11cf08u: goto label_11cf08;
        case 0x11cf0cu: goto label_11cf0c;
        case 0x11cf10u: goto label_11cf10;
        case 0x11cf14u: goto label_11cf14;
        case 0x11cf18u: goto label_11cf18;
        case 0x11cf1cu: goto label_11cf1c;
        case 0x11cf20u: goto label_11cf20;
        case 0x11cf24u: goto label_11cf24;
        case 0x11cf28u: goto label_11cf28;
        case 0x11cf2cu: goto label_11cf2c;
        case 0x11cf30u: goto label_11cf30;
        case 0x11cf34u: goto label_11cf34;
        case 0x11cf38u: goto label_11cf38;
        case 0x11cf3cu: goto label_11cf3c;
        case 0x11cf40u: goto label_11cf40;
        case 0x11cf44u: goto label_11cf44;
        case 0x11cf48u: goto label_11cf48;
        case 0x11cf4cu: goto label_11cf4c;
        case 0x11cf50u: goto label_11cf50;
        case 0x11cf54u: goto label_11cf54;
        case 0x11cf58u: goto label_11cf58;
        case 0x11cf5cu: goto label_11cf5c;
        case 0x11cf60u: goto label_11cf60;
        case 0x11cf64u: goto label_11cf64;
        case 0x11cf68u: goto label_11cf68;
        case 0x11cf6cu: goto label_11cf6c;
        default: break;
    }

    ctx->pc = 0x11cce8u;

label_11cce8:
    // 0x11cce8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x11cce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_11ccec:
    // 0x11ccec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x11ccecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_11ccf0:
    // 0x11ccf0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x11ccf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_11ccf4:
    // 0x11ccf4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x11ccf4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11ccf8:
    // 0x11ccf8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x11ccf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_11ccfc:
    // 0x11ccfc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x11ccfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_11cd00:
    // 0x11cd00: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x11cd00u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_11cd04:
    // 0x11cd04: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x11cd04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_11cd08:
    // 0x11cd08: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x11cd08u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_11cd0c:
    // 0x11cd0c: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x11cd0cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
label_11cd10:
    // 0x11cd10: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x11cd10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_11cd14:
    // 0x11cd14: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x11cd14u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
label_11cd18:
    // 0x11cd18: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x11cd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_11cd1c:
    // 0x11cd1c: 0x46007506  mov.s       $f20, $f14
    ctx->pc = 0x11cd1cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
label_11cd20:
    // 0x11cd20: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x11cd20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_11cd24:
    // 0x11cd24: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x11cd24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_11cd28:
    // 0x11cd28: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x11cd28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_11cd2c:
    // 0x11cd2c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11cd2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_11cd30:
    // 0x11cd30: 0xe7b700a8  swc1        $f23, 0xA8($sp)
    ctx->pc = 0x11cd30u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_11cd34:
    // 0x11cd34: 0xc0e4060  jal         func_390180
label_11cd38:
    if (ctx->pc == 0x11CD38u) {
        ctx->pc = 0x11CD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CD34u;
        // 0x11cd38: 0xafa50010  sw          $a1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CD3Cu;
        goto label_11cd3c;
    }
    ctx->pc = 0x11CD34u;
    SET_GPR_U32(ctx, 31, 0x11CD3Cu);
    ctx->pc = 0x11CD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CD34u;
    // 0x11cd38: 0xafa50010  sw          $a1, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x11CD34u, 0x11CD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CD3Cu;
label_11cd3c:
    // 0x11cd3c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11cd3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11cd40:
    // 0x11cd40: 0x1220007c  beqz        $s1, . + 4 + (0x7C << 2)
label_11cd44:
    if (ctx->pc == 0x11CD44u) {
        ctx->pc = 0x11CD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CD40u;
        // 0x11cd44: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CD48u;
        goto label_11cd48;
    }
    ctx->pc = 0x11CD40u;
    {
        const bool branch_taken_0x11cd40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CD40u;
        // 0x11cd44: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cd40) {
            ctx->pc = 0x11CF34u;
            goto label_11cf34;
        }
    }
    ctx->pc = 0x11CD48u;
label_11cd48:
    // 0x11cd48: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11cd48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11cd4c:
    // 0x11cd4c: 0x2b2102a  slt         $v0, $s5, $s2
    ctx->pc = 0x11cd4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_11cd50:
    // 0x11cd50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11cd50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11cd54:
    // 0x11cd54: 0xc047eec  jal         func_11FBB0
label_11cd58:
    if (ctx->pc == 0x11CD58u) {
        ctx->pc = 0x11CD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CD54u;
        // 0x11cd58: 0x242200b  movn        $a0, $s2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CD5Cu;
        goto label_11cd5c;
    }
    ctx->pc = 0x11CD54u;
    SET_GPR_U32(ctx, 31, 0x11CD5Cu);
    ctx->pc = 0x11CD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CD54u;
    // 0x11cd58: 0x242200b  movn        $a0, $s2, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x11CD54u, 0x11CD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CD5Cu;
label_11cd5c:
    // 0x11cd5c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x11cd5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11cd60:
    // 0x11cd60: 0x12600074  beqz        $s3, . + 4 + (0x74 << 2)
label_11cd64:
    if (ctx->pc == 0x11CD64u) {
        ctx->pc = 0x11CD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CD60u;
        // 0x11cd64: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CD68u;
        goto label_11cd68;
    }
    ctx->pc = 0x11CD60u;
    {
        const bool branch_taken_0x11cd60 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CD60u;
        // 0x11cd64: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cd60) {
            ctx->pc = 0x11CF34u;
            goto label_11cf34;
        }
    }
    ctx->pc = 0x11CD68u;
label_11cd68:
    // 0x11cd68: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x11cd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_11cd6c:
    // 0x11cd6c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x11cd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11cd70:
    // 0x11cd70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11cd70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_11cd74:
    // 0x11cd74: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11cd74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_11cd78:
    // 0x11cd78: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x11cd78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11cd7c:
    // 0x11cd7c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x11cd7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_11cd80:
    // 0x11cd80: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x11cd80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_11cd84:
    // 0x11cd84: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x11cd84u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_11cd88:
    // 0x11cd88: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x11cd88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_11cd8c:
    // 0x11cd8c: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x11cd8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
label_11cd90:
    // 0x11cd90: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x11cd90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_11cd94:
    // 0x11cd94: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x11cd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_11cd98:
    // 0x11cd98: 0x84440188  lh          $a0, 0x188($v0)
    ctx->pc = 0x11cd98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 392)));
label_11cd9c:
    // 0x11cd9c: 0x8c43018c  lw          $v1, 0x18C($v0)
    ctx->pc = 0x11cd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 396)));
label_11cda0:
    // 0x11cda0: 0x60f809  jalr        $v1
label_11cda4:
    if (ctx->pc == 0x11CDA4u) {
        ctx->pc = 0x11CDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CDA0u;
        // 0x11cda4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CDA8u;
        goto label_11cda8;
    }
    ctx->pc = 0x11CDA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11CDA8u);
        ctx->pc = 0x11CDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CDA0u;
        // 0x11cda4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CDA0u, 0x11CDA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11CDA8u;
label_11cda8:
    // 0x11cda8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x11cda8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_11cdac:
    // 0x11cdac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11cdacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11cdb0:
    // 0x11cdb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11cdb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11cdb4:
    // 0x11cdb4: 0x7e620320  sq          $v0, 0x320($s3)
    ctx->pc = 0x11cdb4u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 800), GPR_VEC(ctx, 2));
label_11cdb8:
    // 0x11cdb8: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x11cdb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11cdbc:
    // 0x11cdbc: 0xc0488ac  jal         func_1222B0
label_11cdc0:
    if (ctx->pc == 0x11CDC0u) {
        ctx->pc = 0x11CDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CDBCu;
        // 0x11cdc0: 0xe6600398  swc1        $f0, 0x398($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 920), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CDC4u;
        goto label_11cdc4;
    }
    ctx->pc = 0x11CDBCu;
    SET_GPR_U32(ctx, 31, 0x11CDC4u);
    ctx->pc = 0x11CDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CDBCu;
    // 0x11cdc0: 0xe6600398  swc1        $f0, 0x398($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 920), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1222B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1222B0u, 0x11CDBCu, 0x11CDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CDC4u;
label_11cdc4:
    // 0x11cdc4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x11cdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_11cdc8:
    // 0x11cdc8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x11cdc8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_11cdcc:
    // 0x11cdcc: 0x84640190  lh          $a0, 0x190($v1)
    ctx->pc = 0x11cdccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 400)));
label_11cdd0:
    // 0x11cdd0: 0x8c620194  lw          $v0, 0x194($v1)
    ctx->pc = 0x11cdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 404)));
label_11cdd4:
    // 0x11cdd4: 0x40f809  jalr        $v0
label_11cdd8:
    if (ctx->pc == 0x11CDD8u) {
        ctx->pc = 0x11CDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CDD4u;
        // 0x11cdd8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CDDCu;
        goto label_11cddc;
    }
    ctx->pc = 0x11CDD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11CDDCu);
        ctx->pc = 0x11CDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CDD4u;
        // 0x11cdd8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CDD4u, 0x11CDDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11CDDCu;
label_11cddc:
    // 0x11cddc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x11cddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_11cde0:
    // 0x11cde0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x11cde0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_11cde4:
    // 0x11cde4: 0x846401a0  lh          $a0, 0x1A0($v1)
    ctx->pc = 0x11cde4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 416)));
label_11cde8:
    // 0x11cde8: 0x8c6201a4  lw          $v0, 0x1A4($v1)
    ctx->pc = 0x11cde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 420)));
label_11cdec:
    // 0x11cdec: 0x40f809  jalr        $v0
label_11cdf0:
    if (ctx->pc == 0x11CDF0u) {
        ctx->pc = 0x11CDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CDECu;
        // 0x11cdf0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CDF4u;
        goto label_11cdf4;
    }
    ctx->pc = 0x11CDECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11CDF4u);
        ctx->pc = 0x11CDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CDECu;
        // 0x11cdf0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CDECu, 0x11CDF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11CDF4u;
label_11cdf4:
    // 0x11cdf4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x11cdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_11cdf8:
    // 0x11cdf8: 0x4617a329  min.s       $f12, $f20, $f23
    ctx->pc = 0x11cdf8u;
    ctx->f[12] = std::min(ctx->f[20], ctx->f[23]);
label_11cdfc:
    // 0x11cdfc: 0x846401a8  lh          $a0, 0x1A8($v1)
    ctx->pc = 0x11cdfcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 424)));
label_11ce00:
    // 0x11ce00: 0x8c6501ac  lw          $a1, 0x1AC($v1)
    ctx->pc = 0x11ce00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 428)));
label_11ce04:
    // 0x11ce04: 0xa0f809  jalr        $a1
label_11ce08:
    if (ctx->pc == 0x11CE08u) {
        ctx->pc = 0x11CE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CE04u;
        // 0x11ce08: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CE0Cu;
        goto label_11ce0c;
    }
    ctx->pc = 0x11CE04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x11CE0Cu);
        ctx->pc = 0x11CE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CE04u;
        // 0x11ce08: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CE04u, 0x11CE0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11CE0Cu;
label_11ce0c:
    // 0x11ce0c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x11ce0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_11ce10:
    // 0x11ce10: 0x845001b0  lh          $s0, 0x1B0($v0)
    ctx->pc = 0x11ce10u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 432)));
label_11ce14:
    // 0x11ce14: 0x245101b0  addiu       $s1, $v0, 0x1B0
    ctx->pc = 0x11ce14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 432));
label_11ce18:
    // 0x11ce18: 0x84440208  lh          $a0, 0x208($v0)
    ctx->pc = 0x11ce18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 520)));
label_11ce1c:
    // 0x11ce1c: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x11ce1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_11ce20:
    // 0x11ce20: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x11ce20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_11ce24:
    // 0x11ce24: 0x60f809  jalr        $v1
label_11ce28:
    if (ctx->pc == 0x11CE28u) {
        ctx->pc = 0x11CE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CE24u;
        // 0x11ce28: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CE2Cu;
        goto label_11ce2c;
    }
    ctx->pc = 0x11CE24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11CE2Cu);
        ctx->pc = 0x11CE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CE24u;
        // 0x11ce28: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CE24u, 0x11CE2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11CE2Cu;
label_11ce2c:
    // 0x11ce2c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x11ce2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_11ce30:
    // 0x11ce30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11ce30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11ce34:
    // 0x11ce34: 0x40f809  jalr        $v0
label_11ce38:
    if (ctx->pc == 0x11CE38u) {
        ctx->pc = 0x11CE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CE34u;
        // 0x11ce38: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CE3Cu;
        goto label_11ce3c;
    }
    ctx->pc = 0x11CE34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11CE3Cu);
        ctx->pc = 0x11CE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CE34u;
        // 0x11ce38: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CE34u, 0x11CE3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11CE3Cu;
label_11ce3c:
    // 0x11ce3c: 0xc04ecae  jal         func_13B2B8
label_11ce40:
    if (ctx->pc == 0x11CE40u) {
        ctx->pc = 0x11CE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CE3Cu;
        // 0x11ce40: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CE44u;
        goto label_11ce44;
    }
    ctx->pc = 0x11CE3Cu;
    SET_GPR_U32(ctx, 31, 0x11CE44u);
    ctx->pc = 0x11CE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CE3Cu;
    // 0x11ce40: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B2B8u, 0x11CE3Cu, 0x11CE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CE44u;
label_11ce44:
    // 0x11ce44: 0x56550035  bnel        $s2, $s5, . + 4 + (0x35 << 2)
label_11ce48:
    if (ctx->pc == 0x11CE48u) {
        ctx->pc = 0x11CE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CE44u;
        // 0x11ce48: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CE4Cu;
        goto label_11ce4c;
    }
    ctx->pc = 0x11CE44u;
    {
        const bool branch_taken_0x11ce44 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 21));
        if (branch_taken_0x11ce44) {
            ctx->pc = 0x11CE48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11CE44u;
            // 0x11ce48: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11CF1Cu;
            goto label_11cf1c;
        }
    }
    ctx->pc = 0x11CE4Cu;
label_11ce4c:
    // 0x11ce4c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x11ce4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_11ce50:
    // 0x11ce50: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x11ce50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11ce54:
    // 0x11ce54: 0x8c83489c  lw          $v1, 0x489C($a0)
    ctx->pc = 0x11ce54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 18588)));
label_11ce58:
    // 0x11ce58: 0x1000002b  b           . + 4 + (0x2B << 2)
label_11ce5c:
    if (ctx->pc == 0x11CE5Cu) {
        ctx->pc = 0x11CE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CE58u;
        // 0x11ce5c: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CE60u;
        goto label_11ce60;
    }
    ctx->pc = 0x11CE58u;
    {
        const bool branch_taken_0x11ce58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CE58u;
        // 0x11ce5c: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ce58) {
            ctx->pc = 0x11CF08u;
            goto label_11cf08;
        }
    }
    ctx->pc = 0x11CE60u;
label_11ce60:
    // 0x11ce60: 0xc047eec  jal         func_11FBB0
label_11ce64:
    if (ctx->pc == 0x11CE64u) {
        ctx->pc = 0x11CE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CE60u;
        // 0x11ce64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CE68u;
        goto label_11ce68;
    }
    ctx->pc = 0x11CE60u;
    SET_GPR_U32(ctx, 31, 0x11CE68u);
    ctx->pc = 0x11CE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CE60u;
    // 0x11ce64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x11CE60u, 0x11CE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CE68u;
label_11ce68:
    // 0x11ce68: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11ce68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11ce6c:
    // 0x11ce6c: 0x12400024  beqz        $s2, . + 4 + (0x24 << 2)
label_11ce70:
    if (ctx->pc == 0x11CE70u) {
        ctx->pc = 0x11CE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CE6Cu;
        // 0x11ce70: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CE74u;
        goto label_11ce74;
    }
    ctx->pc = 0x11CE6Cu;
    {
        const bool branch_taken_0x11ce6c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CE6Cu;
        // 0x11ce70: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ce6c) {
            ctx->pc = 0x11CF00u;
            goto label_11cf00;
        }
    }
    ctx->pc = 0x11CE74u;
label_11ce74:
    // 0x11ce74: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x11ce74u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_11ce78:
    // 0x11ce78: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x11ce78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_11ce7c:
    // 0x11ce7c: 0x7e420320  sq          $v0, 0x320($s2)
    ctx->pc = 0x11ce7cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 800), GPR_VEC(ctx, 2));
label_11ce80:
    // 0x11ce80: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x11ce80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11ce84:
    // 0x11ce84: 0xe6400398  swc1        $f0, 0x398($s2)
    ctx->pc = 0x11ce84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 920), bits); }
label_11ce88:
    // 0x11ce88: 0x84640190  lh          $a0, 0x190($v1)
    ctx->pc = 0x11ce88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 400)));
label_11ce8c:
    // 0x11ce8c: 0x8c620194  lw          $v0, 0x194($v1)
    ctx->pc = 0x11ce8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 404)));
label_11ce90:
    // 0x11ce90: 0x40f809  jalr        $v0
label_11ce94:
    if (ctx->pc == 0x11CE94u) {
        ctx->pc = 0x11CE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CE90u;
        // 0x11ce94: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CE98u;
        goto label_11ce98;
    }
    ctx->pc = 0x11CE90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11CE98u);
        ctx->pc = 0x11CE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CE90u;
        // 0x11ce94: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CE90u, 0x11CE98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11CE98u;
label_11ce98:
    // 0x11ce98: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x11ce98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_11ce9c:
    // 0x11ce9c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x11ce9cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_11cea0:
    // 0x11cea0: 0x846401a0  lh          $a0, 0x1A0($v1)
    ctx->pc = 0x11cea0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 416)));
label_11cea4:
    // 0x11cea4: 0x8c6201a4  lw          $v0, 0x1A4($v1)
    ctx->pc = 0x11cea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 420)));
label_11cea8:
    // 0x11cea8: 0x40f809  jalr        $v0
label_11ceac:
    if (ctx->pc == 0x11CEACu) {
        ctx->pc = 0x11CEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CEA8u;
        // 0x11ceac: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CEB0u;
        goto label_11ceb0;
    }
    ctx->pc = 0x11CEA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11CEB0u);
        ctx->pc = 0x11CEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CEA8u;
        // 0x11ceac: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CEA8u, 0x11CEB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11CEB0u;
label_11ceb0:
    // 0x11ceb0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x11ceb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_11ceb4:
    // 0x11ceb4: 0x4617a329  min.s       $f12, $f20, $f23
    ctx->pc = 0x11ceb4u;
    ctx->f[12] = std::min(ctx->f[20], ctx->f[23]);
label_11ceb8:
    // 0x11ceb8: 0x846401a8  lh          $a0, 0x1A8($v1)
    ctx->pc = 0x11ceb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 424)));
label_11cebc:
    // 0x11cebc: 0x8c6501ac  lw          $a1, 0x1AC($v1)
    ctx->pc = 0x11cebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 428)));
label_11cec0:
    // 0x11cec0: 0xa0f809  jalr        $a1
label_11cec4:
    if (ctx->pc == 0x11CEC4u) {
        ctx->pc = 0x11CEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CEC0u;
        // 0x11cec4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CEC8u;
        goto label_11cec8;
    }
    ctx->pc = 0x11CEC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x11CEC8u);
        ctx->pc = 0x11CEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CEC0u;
        // 0x11cec4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CEC0u, 0x11CEC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11CEC8u;
label_11cec8:
    // 0x11cec8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x11cec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_11cecc:
    // 0x11cecc: 0x845001b0  lh          $s0, 0x1B0($v0)
    ctx->pc = 0x11ceccu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 432)));
label_11ced0:
    // 0x11ced0: 0x245101b0  addiu       $s1, $v0, 0x1B0
    ctx->pc = 0x11ced0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 432));
label_11ced4:
    // 0x11ced4: 0x84440208  lh          $a0, 0x208($v0)
    ctx->pc = 0x11ced4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 520)));
label_11ced8:
    // 0x11ced8: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x11ced8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_11cedc:
    // 0x11cedc: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x11cedcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_11cee0:
    // 0x11cee0: 0x60f809  jalr        $v1
label_11cee4:
    if (ctx->pc == 0x11CEE4u) {
        ctx->pc = 0x11CEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CEE0u;
        // 0x11cee4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CEE8u;
        goto label_11cee8;
    }
    ctx->pc = 0x11CEE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11CEE8u);
        ctx->pc = 0x11CEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CEE0u;
        // 0x11cee4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CEE0u, 0x11CEE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11CEE8u;
label_11cee8:
    // 0x11cee8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x11cee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_11ceec:
    // 0x11ceec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11ceecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11cef0:
    // 0x11cef0: 0x40f809  jalr        $v0
label_11cef4:
    if (ctx->pc == 0x11CEF4u) {
        ctx->pc = 0x11CEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CEF0u;
        // 0x11cef4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CEF8u;
        goto label_11cef8;
    }
    ctx->pc = 0x11CEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11CEF8u);
        ctx->pc = 0x11CEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CEF0u;
        // 0x11cef4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CEF0u, 0x11CEF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11CEF8u;
label_11cef8:
    // 0x11cef8: 0xc04ecae  jal         func_13B2B8
label_11cefc:
    if (ctx->pc == 0x11CEFCu) {
        ctx->pc = 0x11CEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CEF8u;
        // 0x11cefc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CF00u;
        goto label_11cf00;
    }
    ctx->pc = 0x11CEF8u;
    SET_GPR_U32(ctx, 31, 0x11CF00u);
    ctx->pc = 0x11CEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CEF8u;
    // 0x11cefc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B2B8u, 0x11CEF8u, 0x11CF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CF00u;
label_11cf00:
    // 0x11cf00: 0x8ea3489c  lw          $v1, 0x489C($s5)
    ctx->pc = 0x11cf00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
label_11cf04:
    // 0x11cf04: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x11cf04u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_11cf08:
    // 0x11cf08: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x11cf08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_11cf0c:
    // 0x11cf0c: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x11cf0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_11cf10:
    // 0x11cf10: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
label_11cf14:
    if (ctx->pc == 0x11CF14u) {
        ctx->pc = 0x11CF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CF10u;
        // 0x11cf14: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CF18u;
        goto label_11cf18;
    }
    ctx->pc = 0x11CF10u;
    {
        const bool branch_taken_0x11cf10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CF10u;
        // 0x11cf14: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cf10) {
            ctx->pc = 0x11CE60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11ce60;
        }
    }
    ctx->pc = 0x11CF18u;
label_11cf18:
    // 0x11cf18: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x11cf18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_11cf1c:
    // 0x11cf1c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x11cf1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_11cf20:
    // 0x11cf20: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x11cf20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_11cf24:
    // 0x11cf24: 0x40f809  jalr        $v0
label_11cf28:
    if (ctx->pc == 0x11CF28u) {
        ctx->pc = 0x11CF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CF24u;
        // 0x11cf28: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CF2Cu;
        goto label_11cf2c;
    }
    ctx->pc = 0x11CF24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11CF2Cu);
        ctx->pc = 0x11CF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CF24u;
        // 0x11cf28: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CF24u, 0x11CF2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11CF2Cu;
label_11cf2c:
    // 0x11cf2c: 0x10000004  b           . + 4 + (0x4 << 2)
label_11cf30:
    if (ctx->pc == 0x11CF30u) {
        ctx->pc = 0x11CF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CF2Cu;
        // 0x11cf30: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CF34u;
        goto label_11cf34;
    }
    ctx->pc = 0x11CF2Cu;
    {
        const bool branch_taken_0x11cf2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CF2Cu;
        // 0x11cf30: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cf2c) {
            ctx->pc = 0x11CF40u;
            goto label_11cf40;
        }
    }
    ctx->pc = 0x11CF34u;
label_11cf34:
    // 0x11cf34: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x11cf34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_11cf38:
    // 0x11cf38: 0x8c62bd30  lw          $v0, -0x42D0($v1)
    ctx->pc = 0x11cf38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_11cf3c:
    // 0x11cf3c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x11cf3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_11cf40:
    // 0x11cf40: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x11cf40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_11cf44:
    // 0x11cf44: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x11cf44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_11cf48:
    // 0x11cf48: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x11cf48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_11cf4c:
    // 0x11cf4c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x11cf4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_11cf50:
    // 0x11cf50: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x11cf50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_11cf54:
    // 0x11cf54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11cf54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_11cf58:
    // 0x11cf58: 0xc7b700a8  lwc1        $f23, 0xA8($sp)
    ctx->pc = 0x11cf58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_11cf5c:
    // 0x11cf5c: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x11cf5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_11cf60:
    // 0x11cf60: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x11cf60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_11cf64:
    // 0x11cf64: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x11cf64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_11cf68:
    // 0x11cf68: 0x3e00008  jr          $ra
label_11cf6c:
    if (ctx->pc == 0x11CF6Cu) {
        ctx->pc = 0x11CF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CF68u;
        // 0x11cf6c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CF70u;
        goto label_fallthrough_0x11cf68;
    }
    ctx->pc = 0x11CF68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CF68u;
        // 0x11cf6c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CF68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x11cf68:
    ctx->pc = 0x11CF70u;
}
