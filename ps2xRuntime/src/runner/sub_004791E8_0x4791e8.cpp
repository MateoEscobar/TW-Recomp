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

// Function: sub_004791E8
// Address: 0x4791e8 - 0x479630
void sub_004791E8_0x4791e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004791E8_0x4791e8");
#endif

    switch (ctx->pc) {
        case 0x479204u: goto label_479204;
        case 0x4795d0u: goto label_4795d0;
        case 0x479614u: goto label_479614;
        default: break;
    }

    ctx->pc = 0x4791e8u;

    // 0x4791e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4791e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4791ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4791ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4791f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4791f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4791f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4791f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4791f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4791f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4791fc: 0xc1233da  jal         func_48CF68
    ctx->pc = 0x4791FCu;
    SET_GPR_U32(ctx, 31, 0x479204u);
    ctx->pc = 0x479200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4791FCu;
    // 0x479200: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF68u, 0x4791FCu, 0x479204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x479204u;
label_479204:
    // 0x479204: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x479204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x479208: 0x3463000a  ori         $v1, $v1, 0xA
    ctx->pc = 0x479208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10);
    // 0x47920c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x47920cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479210: 0x70831b89  pcpyld      $v1, $a0, $v1
    ctx->pc = 0x479210u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x479214: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x479214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x479218: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x479218u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x47921c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x47921cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x479220: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x479220u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x479224: 0x3c066c01  lui         $a2, 0x6C01
    ctx->pc = 0x479224u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27649 << 16));
    // 0x479228: 0x34c603fa  ori         $a2, $a2, 0x3FA
    ctx->pc = 0x479228u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1018);
    // 0x47922c: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x47922cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x479230: 0x34c60100  ori         $a2, $a2, 0x100
    ctx->pc = 0x479230u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)256);
    // 0x479234: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x479234u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x479238: 0x34c60404  ori         $a2, $a2, 0x404
    ctx->pc = 0x479238u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1028);
    // 0x47923c: 0x70c42389  pcpyld      $a0, $a2, $a0
    ctx->pc = 0x47923cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 4)));
    // 0x479240: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x479240u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x479244: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x479244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x479248: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x479248u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x47924c: 0x92030047  lbu         $v1, 0x47($s0)
    ctx->pc = 0x47924cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 71)));
    // 0x479250: 0x8f828a2c  lw          $v0, -0x75D4($gp)
    ctx->pc = 0x479250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937132)));
    // 0x479254: 0x386300ff  xori        $v1, $v1, 0xFF
    ctx->pc = 0x479254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)255);
    // 0x479258: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x479258u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x47925c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x47925cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x479260: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x479260u;
    {
        const bool branch_taken_0x479260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x479264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479260u;
        // 0x479264: 0xaf838a30  sw          $v1, -0x75D0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937136), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479260) {
            ctx->pc = 0x479278u;
            goto label_479278;
        }
    }
    ctx->pc = 0x479268u;
    // 0x479268: 0xdf828730  ld          $v0, -0x78D0($gp)
    ctx->pc = 0x479268u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936368)));
    // 0x47926c: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x47926cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x479270: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x479270u;
    {
        const bool branch_taken_0x479270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x479274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479270u;
        // 0x479274: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479270) {
            ctx->pc = 0x479284u;
            goto label_479284;
        }
    }
    ctx->pc = 0x479278u;
label_479278:
    // 0x479278: 0xdf828730  ld          $v0, -0x78D0($gp)
    ctx->pc = 0x479278u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936368)));
    // 0x47927c: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x47927cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x479280: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x479280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_479284:
    // 0x479284: 0xff828730  sd          $v0, -0x78D0($gp)
    ctx->pc = 0x479284u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936368), GPR_U64(ctx, 2));
    // 0x479288: 0x92060029  lbu         $a2, 0x29($s0)
    ctx->pc = 0x479288u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
    // 0x47928c: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x47928cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x479290: 0x8f828730  lw          $v0, -0x78D0($gp)
    ctx->pc = 0x479290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936368)));
    // 0x479294: 0x3c07fc00  lui         $a3, 0xFC00
    ctx->pc = 0x479294u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64512 << 16));
    // 0x479298: 0x34e77fff  ori         $a3, $a3, 0x7FFF
    ctx->pc = 0x479298u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32767);
    // 0x47929c: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x47929cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x4792a0: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4792a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4792a4: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x4792a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x4792a8: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4792a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4792ac: 0xdc64f750  ld          $a0, -0x8B0($v1)
    ctx->pc = 0x4792acu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 4294965072)));
    // 0x4792b0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4792b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4792b4: 0x2463f750  addiu       $v1, $v1, -0x8B0
    ctx->pc = 0x4792b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965072));
    // 0x4792b8: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x4792b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x4792bc: 0x873024  and         $a2, $a0, $a3
    ctx->pc = 0x4792bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x4792c0: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x4792c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
    // 0x4792c4: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x4792c4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4792c8: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x4792c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x4792cc: 0x70a62389  pcpyld      $a0, $a1, $a2
    ctx->pc = 0x4792ccu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
    // 0x4792d0: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x4792d0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x4792d4: 0x8f86898c  lw          $a2, -0x7674($gp)
    ctx->pc = 0x4792d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x4792d8: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x4792d8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x4792dc: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x4792dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x4792e0: 0xaf86898c  sw          $a2, -0x7674($gp)
    ctx->pc = 0x4792e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 6));
    // 0x4792e4: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x4792e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
    // 0x4792e8: 0x344203fb  ori         $v0, $v0, 0x3FB
    ctx->pc = 0x4792e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1019);
    // 0x4792ec: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x4792ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x4792f0: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x4792f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x4792f4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x4792f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x4792f8: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x4792f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x4792fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4792fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479300: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x479300u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x479304: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x479304u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x479308: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x479308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x47930c: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x47930cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x479310: 0xdf828730  ld          $v0, -0x78D0($gp)
    ctx->pc = 0x479310u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936368)));
    // 0x479314: 0xc7858254  lwc1        $f5, -0x7DAC($gp)
    ctx->pc = 0x479314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x479318: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x479318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x47931c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x47931Cu;
    {
        const bool branch_taken_0x47931c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x479320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47931Cu;
        // 0x479320: 0x92020044  lbu         $v0, 0x44($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47931c) {
            ctx->pc = 0x479328u;
            goto label_479328;
        }
    }
    ctx->pc = 0x479324u;
    // 0x479324: 0xc7858258  lwc1        $f5, -0x7DA8($gp)
    ctx->pc = 0x479324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_479328:
    // 0x479328: 0x92030045  lbu         $v1, 0x45($s0)
    ctx->pc = 0x479328u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
    // 0x47932c: 0x92040046  lbu         $a0, 0x46($s0)
    ctx->pc = 0x47932cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x479330: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x479330u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x479334: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x479334u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x479338: 0x92050047  lbu         $a1, 0x47($s0)
    ctx->pc = 0x479338u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 71)));
    // 0x47933c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x47933cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x479340: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x479340u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x479344: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x479344u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x479348: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x479348u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x47934c: 0xc781825c  lwc1        $f1, -0x7DA4($gp)
    ctx->pc = 0x47934cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x479350: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x479350u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x479354: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x479354u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x479358: 0x46010182  mul.s       $f6, $f0, $f1
    ctx->pc = 0x479358u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x47935c: 0x460519c2  mul.s       $f7, $f3, $f5
    ctx->pc = 0x47935cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x479360: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x479360u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x479364: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x479364u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x479368: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x479368u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x47936c: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x47936cu;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x479370: 0x46051182  mul.s       $f6, $f2, $f5
    ctx->pc = 0x479370u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x479374: 0x460521c2  mul.s       $f7, $f4, $f5
    ctx->pc = 0x479374u;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x479378: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x479378u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x47937c: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x47937cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x479380: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x479380u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x479384: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x479384u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
    // 0x479388: 0x24c30020  addiu       $v1, $a2, 0x20
    ctx->pc = 0x479388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x47938c: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x47938cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x479390: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x479390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
    // 0x479394: 0x344203fc  ori         $v0, $v0, 0x3FC
    ctx->pc = 0x479394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1020);
    // 0x479398: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x479398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x47939c: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x47939cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x4793a0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x4793a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x4793a4: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x4793a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x4793a8: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x4793a8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x4793ac: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x4793acu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
    // 0x4793b0: 0x24c30030  addiu       $v1, $a2, 0x30
    ctx->pc = 0x4793b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x4793b4: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4793b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x4793b8: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x4793b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x4793bc: 0xc7848260  lwc1        $f4, -0x7DA0($gp)
    ctx->pc = 0x4793bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4793c0: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x4793c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4793c4: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x4793c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4793c8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x4793c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4793cc: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x4793ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4793d0: 0x46040942  mul.s       $f5, $f1, $f4
    ctx->pc = 0x4793d0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x4793d4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x4793d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4793d8: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x4793d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4793dc: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x4793dcu;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x4793e0: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x4793e0u;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x4793e4: 0x46041982  mul.s       $f6, $f3, $f4
    ctx->pc = 0x4793e4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x4793e8: 0x46041142  mul.s       $f5, $f2, $f4
    ctx->pc = 0x4793e8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x4793ec: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x4793ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4793f0: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x4793f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4793f4: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x4793f4u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x4793f8: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x4793f8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
    // 0x4793fc: 0x24c30040  addiu       $v1, $a2, 0x40
    ctx->pc = 0x4793fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x479400: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x479400u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x479404: 0x92020028  lbu         $v0, 0x28($s0)
    ctx->pc = 0x479404u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x479408: 0x3c046c03  lui         $a0, 0x6C03
    ctx->pc = 0x479408u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27651 << 16));
    // 0x47940c: 0x348403fd  ori         $a0, $a0, 0x3FD
    ctx->pc = 0x47940cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1021);
    // 0x479410: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x479410u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x479414: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x479414u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x479418: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x479418u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x47941c: 0x34840404  ori         $a0, $a0, 0x404
    ctx->pc = 0x47941cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1028);
    // 0x479420: 0x70871b89  pcpyld      $v1, $a0, $a3
    ctx->pc = 0x479420u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x479424: 0x30470007  andi        $a3, $v0, 0x7
    ctx->pc = 0x479424u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x479428: 0x7cc30040  sq          $v1, 0x40($a2)
    ctx->pc = 0x479428u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 3));
    // 0x47942c: 0x24c20050  addiu       $v0, $a2, 0x50
    ctx->pc = 0x47942cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x479430: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x479430u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x479434: 0x8f838790  lw          $v1, -0x7870($gp)
    ctx->pc = 0x479434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936464)));
    // 0x479438: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x479438u;
    {
        const bool branch_taken_0x479438 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x47943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479438u;
        // 0x47943c: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x479438) {
            ctx->pc = 0x479448u;
            goto label_479448;
        }
    }
    ctx->pc = 0x479440u;
    // 0x479440: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x479440u;
    {
        const bool branch_taken_0x479440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x479440) {
            ctx->pc = 0x479444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x479440u;
            // 0x479444: 0x34e70008  ori         $a3, $a3, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x479460u;
            goto label_479460;
        }
    }
    ctx->pc = 0x479448u;
label_479448:
    // 0x479448: 0x8f828794  lw          $v0, -0x786C($gp)
    ctx->pc = 0x479448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936468)));
    // 0x47944c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x47944Cu;
    {
        const bool branch_taken_0x47944c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x479450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47944Cu;
        // 0x479450: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x47944c) {
            ctx->pc = 0x479488u;
            goto label_479488;
        }
    }
    ctx->pc = 0x479454u;
    // 0x479454: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x479454u;
    {
        const bool branch_taken_0x479454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x479454) {
            ctx->pc = 0x479458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x479454u;
            // 0x479458: 0x3c030053  lui         $v1, 0x53 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x479490u;
            goto label_479490;
        }
    }
    ctx->pc = 0x47945Cu;
    // 0x47945c: 0x34e70008  ori         $a3, $a3, 0x8
    ctx->pc = 0x47945cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
label_479460:
    // 0x479460: 0x8f84898c  lw          $a0, -0x7674($gp)
    ctx->pc = 0x479460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x479464: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x479464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x479468: 0x2463f7f0  addiu       $v1, $v1, -0x810
    ctx->pc = 0x479468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965232));
    // 0x47946c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x47946cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x52F7F0u));
    // 0x479470: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x479470u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x479474: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x479474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x479478: 0xaf84898c  sw          $a0, -0x7674($gp)
    ctx->pc = 0x479478u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 4));
    // 0x47947c: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x47947cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x479480: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x479480u;
    {
        const bool branch_taken_0x479480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x479484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479480u;
        // 0x479484: 0x2463f800  addiu       $v1, $v1, -0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479480) {
            ctx->pc = 0x4794B0u;
            goto label_4794b0;
        }
    }
    ctx->pc = 0x479488u;
label_479488:
    // 0x479488: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x479488u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x47948c: 0x0  nop
    ctx->pc = 0x47948cu;
    // NOP
label_479490:
    // 0x479490: 0x8f84898c  lw          $a0, -0x7674($gp)
    ctx->pc = 0x479490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x479494: 0x2463f7d0  addiu       $v1, $v1, -0x830
    ctx->pc = 0x479494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965200));
    // 0x479498: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x479498u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x47949c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x47949cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x4794a0: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x4794a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x4794a4: 0xaf84898c  sw          $a0, -0x7674($gp)
    ctx->pc = 0x4794a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 4));
    // 0x4794a8: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x4794a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x4794ac: 0x2463f7e0  addiu       $v1, $v1, -0x820
    ctx->pc = 0x4794acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965216));
label_4794b0:
    // 0x4794b0: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x4794b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x4794b4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x4794b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4794b8: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x4794b8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x4794bc: 0xaf85898c  sw          $a1, -0x7674($gp)
    ctx->pc = 0x4794bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 5));
    // 0x4794c0: 0x8f838a34  lw          $v1, -0x75CC($gp)
    ctx->pc = 0x4794c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937140)));
    // 0x4794c4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4794c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4794c8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4794C8u;
    {
        const bool branch_taken_0x4794c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4794CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4794C8u;
        // 0x4794cc: 0xaf808788  sw          $zero, -0x7878($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936456), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4794c8) {
            ctx->pc = 0x4794D8u;
            goto label_4794d8;
        }
    }
    ctx->pc = 0x4794D0u;
    // 0x4794d0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x4794d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4794d4: 0xaf828788  sw          $v0, -0x7878($gp)
    ctx->pc = 0x4794d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936456), GPR_U32(ctx, 2));
label_4794d8:
    // 0x4794d8: 0x9f82878c  lwu         $v0, -0x7874($gp)
    ctx->pc = 0x4794d8u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294936460)));
    // 0x4794dc: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x4794dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x4794e0: 0x9f848788  lwu         $a0, -0x7878($gp)
    ctx->pc = 0x4794e0u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294936456)));
    // 0x4794e4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x4794e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x4794e8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4794e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4794ec: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x4794ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4794f0: 0x70831b89  pcpyld      $v1, $a0, $v1
    ctx->pc = 0x4794f0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x4794f4: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x4794f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x4794f8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x4794f8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x4794fc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4794fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x479500: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x479500u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x479504: 0x92030028  lbu         $v1, 0x28($s0)
    ctx->pc = 0x479504u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x479508: 0x30640010  andi        $a0, $v1, 0x10
    ctx->pc = 0x479508u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x47950c: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x47950cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x479510: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x479510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x479514: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x479514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x479518: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x479518u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x47951c: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x47951cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x479520: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x479520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x479524: 0xa202002b  sb          $v0, 0x2B($s0)
    ctx->pc = 0x479524u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 2));
    // 0x479528: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x479528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x47952c: 0x8f858784  lw          $a1, -0x787C($gp)
    ctx->pc = 0x47952cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x479530: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x479530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x479534: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x479534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x479538: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x479538u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x47953c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47953cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x479540: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x479540u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x479544: 0x10a6000a  beq         $a1, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x479544u;
    {
        const bool branch_taken_0x479544 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x479548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479544u;
        // 0x479548: 0x6203c  dsll32      $a0, $a2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479544) {
            ctx->pc = 0x479570u;
            goto label_479570;
        }
    }
    ctx->pc = 0x47954Cu;
    // 0x47954c: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x47954cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x479550: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x479550u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x479554: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x479554u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479558: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x479558u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x47955c: 0x8f83898c  lw          $v1, -0x7674($gp)
    ctx->pc = 0x47955cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x479560: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x479560u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x479564: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x479564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x479568: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x479568u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x47956c: 0xaf868784  sw          $a2, -0x787C($gp)
    ctx->pc = 0x47956cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936452), GPR_U32(ctx, 6));
label_479570:
    // 0x479570: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x479570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x479574: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x479574u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x479578: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x479578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x47957c: 0xac69001c  sw          $t1, 0x1C($v1)
    ctx->pc = 0x47957cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 9));
    // 0x479580: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x479580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x479584: 0x3c060200  lui         $a2, 0x200
    ctx->pc = 0x479584u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)512 << 16));
    // 0x479588: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x479588u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x47958c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x47958cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x479590: 0x3c070300  lui         $a3, 0x300
    ctx->pc = 0x479590u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)768 << 16));
    // 0x479594: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x479594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x479598: 0x24aa0018  addiu       $t2, $a1, 0x18
    ctx->pc = 0x479598u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x47959c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x47959cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x4795a0: 0x9d440008  lwu         $a0, 0x8($t2)
    ctx->pc = 0x4795a0u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x4795a4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4795a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4795a8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x4795a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x4795ac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4795acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4795b0: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x4795b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x4795b4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4795b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4795b8: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x4795b8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x4795bc: 0x8f83898c  lw          $v1, -0x7674($gp)
    ctx->pc = 0x4795bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x4795c0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x4795c0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x4795c4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x4795c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x4795c8: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4795c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x4795cc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4795ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_4795d0:
    // 0x4795d0: 0x42000039  di
    ctx->pc = 0x4795d0u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x4795d4: 0x40f  sync.p
    ctx->pc = 0x4795d4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x4795d8: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x4795d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x4795dc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4795dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4795e0: 0x0  nop
    ctx->pc = 0x4795e0u;
    // NOP
    // 0x4795e4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4795E4u;
    {
        const bool branch_taken_0x4795e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4795e4) {
            ctx->pc = 0x4795D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4795d0;
        }
    }
    ctx->pc = 0x4795ECu;
    // 0x4795ec: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x4795ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x4795f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4795f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4795f4: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x4795f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
    // 0x4795f8: 0x42000038  ei
    ctx->pc = 0x4795f8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x4795fc: 0x8d420004  lw          $v0, 0x4($t2)
    ctx->pc = 0x4795fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x479600: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x479600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x479604: 0x14490004  bne         $v0, $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x479604u;
    {
        const bool branch_taken_0x479604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        ctx->pc = 0x479608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479604u;
        // 0x479608: 0xad420004  sw          $v0, 0x4($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479604) {
            ctx->pc = 0x479618u;
            goto label_479618;
        }
    }
    ctx->pc = 0x47960Cu;
    // 0x47960c: 0xc1237ea  jal         func_48DFA8
    ctx->pc = 0x47960Cu;
    SET_GPR_U32(ctx, 31, 0x479614u);
    ctx->pc = 0x479610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47960Cu;
    // 0x479610: 0x140202d  daddu       $a0, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48DFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48DFA8u, 0x47960Cu, 0x479614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x479614u;
label_479614:
    // 0x479614: 0x0  nop
    ctx->pc = 0x479614u;
    // NOP
label_479618:
    // 0x479618: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x479618u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47961c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47961cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x479620: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x479620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x479624: 0x3e00008  jr          $ra
    ctx->pc = 0x479624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x479628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479624u;
        // 0x479628: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x479624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47962Cu;
    // 0x47962c: 0x0  nop
    ctx->pc = 0x47962cu;
    // NOP
    ctx->pc = 0x479630u;
}
