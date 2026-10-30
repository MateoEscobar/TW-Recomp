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

// Function: sub_001770D8
// Address: 0x1770d8 - 0x1771a0
void sub_001770D8_0x1770d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001770D8_0x1770d8");
#endif

    switch (ctx->pc) {
        case 0x1770d8u: goto label_1770d8;
        case 0x1770dcu: goto label_1770dc;
        case 0x1770e0u: goto label_1770e0;
        case 0x1770e4u: goto label_1770e4;
        case 0x1770e8u: goto label_1770e8;
        case 0x1770ecu: goto label_1770ec;
        case 0x1770f0u: goto label_1770f0;
        case 0x1770f4u: goto label_1770f4;
        case 0x1770f8u: goto label_1770f8;
        case 0x1770fcu: goto label_1770fc;
        case 0x177100u: goto label_177100;
        case 0x177104u: goto label_177104;
        case 0x177108u: goto label_177108;
        case 0x17710cu: goto label_17710c;
        case 0x177110u: goto label_177110;
        case 0x177114u: goto label_177114;
        case 0x177118u: goto label_177118;
        case 0x17711cu: goto label_17711c;
        case 0x177120u: goto label_177120;
        case 0x177124u: goto label_177124;
        case 0x177128u: goto label_177128;
        case 0x17712cu: goto label_17712c;
        case 0x177130u: goto label_177130;
        case 0x177134u: goto label_177134;
        case 0x177138u: goto label_177138;
        case 0x17713cu: goto label_17713c;
        case 0x177140u: goto label_177140;
        case 0x177144u: goto label_177144;
        case 0x177148u: goto label_177148;
        case 0x17714cu: goto label_17714c;
        case 0x177150u: goto label_177150;
        case 0x177154u: goto label_177154;
        case 0x177158u: goto label_177158;
        case 0x17715cu: goto label_17715c;
        case 0x177160u: goto label_177160;
        case 0x177164u: goto label_177164;
        case 0x177168u: goto label_177168;
        case 0x17716cu: goto label_17716c;
        case 0x177170u: goto label_177170;
        case 0x177174u: goto label_177174;
        case 0x177178u: goto label_177178;
        case 0x17717cu: goto label_17717c;
        case 0x177180u: goto label_177180;
        case 0x177184u: goto label_177184;
        case 0x177188u: goto label_177188;
        case 0x17718cu: goto label_17718c;
        case 0x177190u: goto label_177190;
        case 0x177194u: goto label_177194;
        case 0x177198u: goto label_177198;
        case 0x17719cu: goto label_17719c;
        default: break;
    }

    ctx->pc = 0x1770d8u;

label_1770d8:
    // 0x1770d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1770d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1770dc:
    // 0x1770dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1770dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1770e0:
    // 0x1770e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1770e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1770e4:
    // 0x1770e4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1770e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1770e8:
    // 0x1770e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1770e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1770ec:
    // 0x1770ec: 0xc05d462  jal         func_175188
label_1770f0:
    if (ctx->pc == 0x1770F0u) {
        ctx->pc = 0x1770F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1770ECu;
        // 0x1770f0: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1770F4u;
        goto label_1770f4;
    }
    ctx->pc = 0x1770ECu;
    SET_GPR_U32(ctx, 31, 0x1770F4u);
    ctx->pc = 0x1770F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1770ECu;
    // 0x1770f0: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x175188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175188u, 0x1770ECu, 0x1770F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1770F4u;
label_1770f4:
    // 0x1770f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1770f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1770f8:
    // 0x1770f8: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1770f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1770fc:
    // 0x1770fc: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1770fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_177100:
    // 0x177100: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
label_177104:
    if (ctx->pc == 0x177104u) {
        ctx->pc = 0x177104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177100u;
        // 0x177104: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177108u;
        goto label_177108;
    }
    ctx->pc = 0x177100u;
    {
        const bool branch_taken_0x177100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x177100) {
            ctx->pc = 0x177104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x177100u;
            // 0x177104: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177118u;
            goto label_177118;
        }
    }
    ctx->pc = 0x177108u;
label_177108:
    // 0x177108: 0xc05d482  jal         func_175208
label_17710c:
    if (ctx->pc == 0x17710Cu) {
        ctx->pc = 0x17710Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177108u;
        // 0x17710c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177110u;
        goto label_177110;
    }
    ctx->pc = 0x177108u;
    SET_GPR_U32(ctx, 31, 0x177110u);
    ctx->pc = 0x17710Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177108u;
    // 0x17710c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175208u, 0x177108u, 0x177110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177110u;
label_177110:
    // 0x177110: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x177110u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_177114:
    // 0x177114: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x177114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_177118:
    // 0x177118: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x177118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_17711c:
    // 0x17711c: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
label_177120:
    if (ctx->pc == 0x177120u) {
        ctx->pc = 0x177120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17711Cu;
        // 0x177120: 0x3c050004  lui         $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177124u;
        goto label_177124;
    }
    ctx->pc = 0x17711Cu;
    {
        const bool branch_taken_0x17711c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x177120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17711Cu;
        // 0x177120: 0x3c050004  lui         $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17711c) {
            ctx->pc = 0x17717Cu;
            goto label_17717c;
        }
    }
    ctx->pc = 0x177124u;
label_177124:
    // 0x177124: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x177124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_177128:
    // 0x177128: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x177128u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
label_17712c:
    // 0x17712c: 0x846400d8  lh          $a0, 0xD8($v1)
    ctx->pc = 0x17712cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 216)));
label_177130:
    // 0x177130: 0x8c6200dc  lw          $v0, 0xDC($v1)
    ctx->pc = 0x177130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 220)));
label_177134:
    // 0x177134: 0x40f809  jalr        $v0
label_177138:
    if (ctx->pc == 0x177138u) {
        ctx->pc = 0x177138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177134u;
        // 0x177138: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17713Cu;
        goto label_17713c;
    }
    ctx->pc = 0x177134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17713Cu);
        ctx->pc = 0x177138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177134u;
        // 0x177138: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177134u, 0x17713Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17713Cu;
label_17713c:
    // 0x17713c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_177140:
    if (ctx->pc == 0x177140u) {
        ctx->pc = 0x177144u;
        goto label_177144;
    }
    ctx->pc = 0x17713Cu;
    {
        const bool branch_taken_0x17713c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17713c) {
            ctx->pc = 0x17717Cu;
            goto label_17717c;
        }
    }
    ctx->pc = 0x177144u;
label_177144:
    // 0x177144: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x177144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_177148:
    // 0x177148: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x177148u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_17714c:
    // 0x17714c: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x17714cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_177150:
    // 0x177150: 0x60f809  jalr        $v1
label_177154:
    if (ctx->pc == 0x177154u) {
        ctx->pc = 0x177154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177150u;
        // 0x177154: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177158u;
        goto label_177158;
    }
    ctx->pc = 0x177150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x177158u);
        ctx->pc = 0x177154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177150u;
        // 0x177154: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177150u, 0x177158u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x177158u;
label_177158:
    // 0x177158: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x177158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17715c:
    // 0x17715c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x17715cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_177160:
    // 0x177160: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x177160u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_177164:
    // 0x177164: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x177164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_177168:
    // 0x177168: 0x60f809  jalr        $v1
label_17716c:
    if (ctx->pc == 0x17716Cu) {
        ctx->pc = 0x17716Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177168u;
        // 0x17716c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177170u;
        goto label_177170;
    }
    ctx->pc = 0x177168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x177170u);
        ctx->pc = 0x17716Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177168u;
        // 0x17716c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177168u, 0x177170u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x177170u;
label_177170:
    // 0x177170: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x177170u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_177174:
    // 0x177174: 0x10000003  b           . + 4 + (0x3 << 2)
label_177178:
    if (ctx->pc == 0x177178u) {
        ctx->pc = 0x177178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177174u;
        // 0x177178: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17717Cu;
        goto label_17717c;
    }
    ctx->pc = 0x177174u;
    {
        const bool branch_taken_0x177174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177174u;
        // 0x177178: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177174) {
            ctx->pc = 0x177184u;
            goto label_177184;
        }
    }
    ctx->pc = 0x17717Cu;
label_17717c:
    // 0x17717c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17717cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_177180:
    // 0x177180: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x177180u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_177184:
    // 0x177184: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x177184u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_177188:
    // 0x177188: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x177188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17718c:
    // 0x17718c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x17718cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_177190:
    // 0x177190: 0x3e00008  jr          $ra
label_177194:
    if (ctx->pc == 0x177194u) {
        ctx->pc = 0x177194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177190u;
        // 0x177194: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177198u;
        goto label_177198;
    }
    ctx->pc = 0x177190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177190u;
        // 0x177194: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177198u;
label_177198:
    // 0x177198: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x177198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_17719c:
    // 0x17719c: 0x0  nop
    ctx->pc = 0x17719cu;
    // NOP
    ctx->pc = 0x1771a0u;
}
