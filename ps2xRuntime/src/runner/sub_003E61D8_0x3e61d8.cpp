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

// Function: sub_003E61D8
// Address: 0x3e61d8 - 0x3e62c8
void sub_003E61D8_0x3e61d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E61D8_0x3e61d8");
#endif

    switch (ctx->pc) {
        case 0x3e61d8u: goto label_3e61d8;
        case 0x3e61dcu: goto label_3e61dc;
        case 0x3e61e0u: goto label_3e61e0;
        case 0x3e61e4u: goto label_3e61e4;
        case 0x3e61e8u: goto label_3e61e8;
        case 0x3e61ecu: goto label_3e61ec;
        case 0x3e61f0u: goto label_3e61f0;
        case 0x3e61f4u: goto label_3e61f4;
        case 0x3e61f8u: goto label_3e61f8;
        case 0x3e61fcu: goto label_3e61fc;
        case 0x3e6200u: goto label_3e6200;
        case 0x3e6204u: goto label_3e6204;
        case 0x3e6208u: goto label_3e6208;
        case 0x3e620cu: goto label_3e620c;
        case 0x3e6210u: goto label_3e6210;
        case 0x3e6214u: goto label_3e6214;
        case 0x3e6218u: goto label_3e6218;
        case 0x3e621cu: goto label_3e621c;
        case 0x3e6220u: goto label_3e6220;
        case 0x3e6224u: goto label_3e6224;
        case 0x3e6228u: goto label_3e6228;
        case 0x3e622cu: goto label_3e622c;
        case 0x3e6230u: goto label_3e6230;
        case 0x3e6234u: goto label_3e6234;
        case 0x3e6238u: goto label_3e6238;
        case 0x3e623cu: goto label_3e623c;
        case 0x3e6240u: goto label_3e6240;
        case 0x3e6244u: goto label_3e6244;
        case 0x3e6248u: goto label_3e6248;
        case 0x3e624cu: goto label_3e624c;
        case 0x3e6250u: goto label_3e6250;
        case 0x3e6254u: goto label_3e6254;
        case 0x3e6258u: goto label_3e6258;
        case 0x3e625cu: goto label_3e625c;
        case 0x3e6260u: goto label_3e6260;
        case 0x3e6264u: goto label_3e6264;
        case 0x3e6268u: goto label_3e6268;
        case 0x3e626cu: goto label_3e626c;
        case 0x3e6270u: goto label_3e6270;
        case 0x3e6274u: goto label_3e6274;
        case 0x3e6278u: goto label_3e6278;
        case 0x3e627cu: goto label_3e627c;
        case 0x3e6280u: goto label_3e6280;
        case 0x3e6284u: goto label_3e6284;
        case 0x3e6288u: goto label_3e6288;
        case 0x3e628cu: goto label_3e628c;
        case 0x3e6290u: goto label_3e6290;
        case 0x3e6294u: goto label_3e6294;
        case 0x3e6298u: goto label_3e6298;
        case 0x3e629cu: goto label_3e629c;
        case 0x3e62a0u: goto label_3e62a0;
        case 0x3e62a4u: goto label_3e62a4;
        case 0x3e62a8u: goto label_3e62a8;
        case 0x3e62acu: goto label_3e62ac;
        case 0x3e62b0u: goto label_3e62b0;
        case 0x3e62b4u: goto label_3e62b4;
        case 0x3e62b8u: goto label_3e62b8;
        case 0x3e62bcu: goto label_3e62bc;
        case 0x3e62c0u: goto label_3e62c0;
        case 0x3e62c4u: goto label_3e62c4;
        default: break;
    }

    ctx->pc = 0x3e61d8u;

label_3e61d8:
    // 0x3e61d8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3e61d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3e61dc:
    // 0x3e61dc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3e61dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3e61e0:
    // 0x3e61e0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3e61e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3e61e4:
    // 0x3e61e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e61e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e61e8:
    // 0x3e61e8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3e61e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3e61ec:
    // 0x3e61ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3e61ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3e61f0:
    // 0x3e61f0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3e61f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e61f4:
    // 0x3e61f4: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x3e61f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_3e61f8:
    // 0x3e61f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e61f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3e61fc:
    // 0x3e61fc: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x3e61fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_3e6200:
    // 0x3e6200: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3e6200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3e6204:
    // 0x3e6204: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e6204u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e6208:
    // 0x3e6208: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e6208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e620c:
    // 0x3e620c: 0x40f809  jalr        $v0
label_3e6210:
    if (ctx->pc == 0x3E6210u) {
        ctx->pc = 0x3E6210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E620Cu;
        // 0x3e6210: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6214u;
        goto label_3e6214;
    }
    ctx->pc = 0x3E620Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E6214u);
        ctx->pc = 0x3E6210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E620Cu;
        // 0x3e6210: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E620Cu, 0x3E6214u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E6214u;
label_3e6214:
    // 0x3e6214: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3e6214u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e6218:
    // 0x3e6218: 0xc0ea146  jal         func_3A8518
label_3e621c:
    if (ctx->pc == 0x3E621Cu) {
        ctx->pc = 0x3E621Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6218u;
        // 0x3e621c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6220u;
        goto label_3e6220;
    }
    ctx->pc = 0x3E6218u;
    SET_GPR_U32(ctx, 31, 0x3E6220u);
    ctx->pc = 0x3E621Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6218u;
    // 0x3e621c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E6218u, 0x3E6220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6220u;
label_3e6220:
    // 0x3e6220: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3e6220u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e6224:
    // 0x3e6224: 0xc0ea13a  jal         func_3A84E8
label_3e6228:
    if (ctx->pc == 0x3E6228u) {
        ctx->pc = 0x3E6228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6224u;
        // 0x3e6228: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E622Cu;
        goto label_3e622c;
    }
    ctx->pc = 0x3E6224u;
    SET_GPR_U32(ctx, 31, 0x3E622Cu);
    ctx->pc = 0x3E6228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6224u;
    // 0x3e6228: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3E6224u, 0x3E622Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E622Cu;
label_3e622c:
    // 0x3e622c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3e622cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3e6230:
    // 0x3e6230: 0xc0ea146  jal         func_3A8518
label_3e6234:
    if (ctx->pc == 0x3E6234u) {
        ctx->pc = 0x3E6234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6230u;
        // 0x3e6234: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6238u;
        goto label_3e6238;
    }
    ctx->pc = 0x3E6230u;
    SET_GPR_U32(ctx, 31, 0x3E6238u);
    ctx->pc = 0x3E6234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6230u;
    // 0x3e6234: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E6230u, 0x3E6238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6238u;
label_3e6238:
    // 0x3e6238: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3e6238u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e623c:
    // 0x3e623c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3e623cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3e6240:
    // 0x3e6240: 0xc0ea12a  jal         func_3A84A8
label_3e6244:
    if (ctx->pc == 0x3E6244u) {
        ctx->pc = 0x3E6244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6240u;
        // 0x3e6244: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6248u;
        goto label_3e6248;
    }
    ctx->pc = 0x3E6240u;
    SET_GPR_U32(ctx, 31, 0x3E6248u);
    ctx->pc = 0x3E6244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6240u;
    // 0x3e6244: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E6240u, 0x3E6248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6248u;
label_3e6248:
    // 0x3e6248: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3e6248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_3e624c:
    // 0x3e624c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e624cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e6250:
    // 0x3e6250: 0x34420304  ori         $v0, $v0, 0x304
    ctx->pc = 0x3e6250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)772);
label_3e6254:
    // 0x3e6254: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x3e6254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_3e6258:
    // 0x3e6258: 0xc0e858c  jal         func_3A1630
label_3e625c:
    if (ctx->pc == 0x3E625Cu) {
        ctx->pc = 0x3E625Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6258u;
        // 0x3e625c: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6260u;
        goto label_3e6260;
    }
    ctx->pc = 0x3E6258u;
    SET_GPR_U32(ctx, 31, 0x3E6260u);
    ctx->pc = 0x3E625Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6258u;
    // 0x3e625c: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E6258u, 0x3E6260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6260u;
label_3e6260:
    // 0x3e6260: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e6260u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e6264:
    // 0x3e6264: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x3e6264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
label_3e6268:
    // 0x3e6268: 0x3231ffff  andi        $s1, $s1, 0xFFFF
    ctx->pc = 0x3e6268u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_3e626c:
    // 0x3e626c: 0xe61400c0  swc1        $f20, 0xC0($s0)
    ctx->pc = 0x3e626cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
label_3e6270:
    // 0x3e6270: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x3e6270u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
label_3e6274:
    // 0x3e6274: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x3e6274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
label_3e6278:
    // 0x3e6278: 0xae1100c4  sw          $s1, 0xC4($s0)
    ctx->pc = 0x3e6278u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 17));
label_3e627c:
    // 0x3e627c: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x3e627cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_3e6280:
    // 0x3e6280: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x3e6280u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_3e6284:
    // 0x3e6284: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x3e6284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
label_3e6288:
    // 0x3e6288: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x3e6288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
label_3e628c:
    // 0x3e628c: 0xae740004  sw          $s4, 0x4($s3)
    ctx->pc = 0x3e628cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
label_3e6290:
    // 0x3e6290: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x3e6290u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
label_3e6294:
    // 0x3e6294: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3e6294u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3e6298:
    // 0x3e6298: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e6298u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e629c:
    // 0x3e629c: 0xe6740000  swc1        $f20, 0x0($s3)
    ctx->pc = 0x3e629cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_3e62a0:
    // 0x3e62a0: 0x7e620010  sq          $v0, 0x10($s3)
    ctx->pc = 0x3e62a0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 2));
label_3e62a4:
    // 0x3e62a4: 0xae63000c  sw          $v1, 0xC($s3)
    ctx->pc = 0x3e62a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
label_3e62a8:
    // 0x3e62a8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3e62a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3e62ac:
    // 0x3e62ac: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3e62acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3e62b0:
    // 0x3e62b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3e62b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e62b4:
    // 0x3e62b4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3e62b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e62b8:
    // 0x3e62b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e62b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3e62bc:
    // 0x3e62bc: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x3e62bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3e62c0:
    // 0x3e62c0: 0x3e00008  jr          $ra
label_3e62c4:
    if (ctx->pc == 0x3E62C4u) {
        ctx->pc = 0x3E62C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E62C0u;
        // 0x3e62c4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E62C8u;
        goto label_fallthrough_0x3e62c0;
    }
    ctx->pc = 0x3E62C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E62C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E62C0u;
        // 0x3e62c4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E62C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e62c0:
    ctx->pc = 0x3E62C8u;
}
