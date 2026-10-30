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

// Function: sub_0049FB88
// Address: 0x49fb88 - 0x49fee8
void sub_0049FB88_0x49fb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049FB88_0x49fb88");
#endif

    switch (ctx->pc) {
        case 0x49fdc0u: goto label_49fdc0;
        case 0x49fe00u: goto label_49fe00;
        case 0x49feb8u: goto label_49feb8;
        default: break;
    }

    ctx->pc = 0x49fb88u;

    // 0x49fb88: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x49fb88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x49fb8c: 0x3c096c0d  lui         $t1, 0x6C0D
    ctx->pc = 0x49fb8cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)27661 << 16));
    // 0x49fb90: 0x352903f0  ori         $t1, $t1, 0x3F0
    ctx->pc = 0x49fb90u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1008);
    // 0x49fb94: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x49fb94u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x49fb98: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x49fb98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x49fb9c: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x49fb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x49fba0: 0x3c1e1000  lui         $fp, 0x1000
    ctx->pc = 0x49fba0u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)4096 << 16));
    // 0x49fba4: 0x37de000d  ori         $fp, $fp, 0xD
    ctx->pc = 0x49fba4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)13);
    // 0x49fba8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x49fba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x49fbac: 0x713e4389  pcpyld      $t0, $t1, $fp
    ctx->pc = 0x49fbacu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 30)));
    // 0x49fbb0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x49fbb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x49fbb4: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x49fbb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x49fbb8: 0x3c1e1000  lui         $fp, 0x1000
    ctx->pc = 0x49fbb8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)4096 << 16));
    // 0x49fbbc: 0x37de0003  ori         $fp, $fp, 0x3
    ctx->pc = 0x49fbbcu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)3);
    // 0x49fbc0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x49fbc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x49fbc4: 0x3c096c03  lui         $t1, 0x6C03
    ctx->pc = 0x49fbc4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)27651 << 16));
    // 0x49fbc8: 0x352903f9  ori         $t1, $t1, 0x3F9
    ctx->pc = 0x49fbc8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1017);
    // 0x49fbcc: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x49fbccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x49fbd0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x49fbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x49fbd4: 0x2442f8d0  addiu       $v0, $v0, -0x730
    ctx->pc = 0x49fbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965456));
    // 0x49fbd8: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x49fbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x49fbdc: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x49fbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
    // 0x49fbe0: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x49fbe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x49fbe4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x49fbe4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49fbe8: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x49fbe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x49fbec: 0x713e3b89  pcpyld      $a3, $t1, $fp
    ctx->pc = 0x49fbecu;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 30)));
    // 0x49fbf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49fbf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49fbf4: 0x2484f8c0  addiu       $a0, $a0, -0x740
    ctx->pc = 0x49fbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965440));
    // 0x49fbf8: 0x7c480000  sq          $t0, 0x0($v0)
    ctx->pc = 0x49fbf8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 8));
    // 0x49fbfc: 0x3c050053  lui         $a1, 0x53
    ctx->pc = 0x49fbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)83 << 16));
    // 0x49fc00: 0x7c870000  sq          $a3, 0x0($a0)
    ctx->pc = 0x49fc00u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 7));
    // 0x49fc04: 0x70633389  pcpyld      $a2, $v1, $v1
    ctx->pc = 0x49fc04u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
    // 0x49fc08: 0x24a5f7c0  addiu       $a1, $a1, -0x840
    ctx->pc = 0x49fc08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965184));
    // 0x49fc0c: 0xc78282e4  lwc1        $f2, -0x7D1C($gp)
    ctx->pc = 0x49fc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x49fc10: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x49fc10u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
    // 0x49fc14: 0x3c0f0053  lui         $t7, 0x53
    ctx->pc = 0x49fc14u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)83 << 16));
    // 0x49fc18: 0x8f8586c0  lw          $a1, -0x7940($gp)
    ctx->pc = 0x49fc18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936256)));
    // 0x49fc1c: 0x3c1e3000  lui         $fp, 0x3000
    ctx->pc = 0x49fc1cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)12288 << 16));
    // 0x49fc20: 0x37de4000  ori         $fp, $fp, 0x4000
    ctx->pc = 0x49fc20u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)16384);
    // 0x49fc24: 0x1ef03c  dsll32      $fp, $fp, 0
    ctx->pc = 0x49fc24u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) << (32 + 0));
    // 0x49fc28: 0x37de0001  ori         $fp, $fp, 0x1
    ctx->pc = 0x49fc28u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)1);
    // 0x49fc2c: 0x24090412  addiu       $t1, $zero, 0x412
    ctx->pc = 0x49fc2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x49fc30: 0x3c0e0053  lui         $t6, 0x53
    ctx->pc = 0x49fc30u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)83 << 16));
    // 0x49fc34: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x49fc34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49fc38: 0x713ec389  pcpyld      $t8, $t1, $fp
    ctx->pc = 0x49fc38u;
    SET_GPR_VEC(ctx, 24, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 30)));
    // 0x49fc3c: 0x3c1e1000  lui         $fp, 0x1000
    ctx->pc = 0x49fc3cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)4096 << 16));
    // 0x49fc40: 0x37de0001  ori         $fp, $fp, 0x1
    ctx->pc = 0x49fc40u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)1);
    // 0x49fc44: 0x3c0c0053  lui         $t4, 0x53
    ctx->pc = 0x49fc44u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)83 << 16));
    // 0x49fc48: 0x41043  sra         $v0, $a0, 1
    ctx->pc = 0x49fc48u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 1));
    // 0x49fc4c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x49fc4cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x49fc50: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x49fc50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x49fc54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x49fc54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x49fc58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x49fc58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x49fc5c: 0x707ebb89  pcpyld      $s7, $v1, $fp
    ctx->pc = 0x49fc5cu;
    SET_GPR_VEC(ctx, 23, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 30)));
    // 0x49fc60: 0x3c1e6000  lui         $fp, 0x6000
    ctx->pc = 0x49fc60u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)24576 << 16));
    // 0x49fc64: 0x37de0001  ori         $fp, $fp, 0x1
    ctx->pc = 0x49fc64u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)1);
    // 0x49fc68: 0x25cef750  addiu       $t6, $t6, -0x8B0
    ctx->pc = 0x49fc68u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294965072));
    // 0x49fc6c: 0x707eb389  pcpyld      $s6, $v1, $fp
    ctx->pc = 0x49fc6cu;
    SET_GPR_VEC(ctx, 22, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 30)));
    // 0x49fc70: 0x3c0a0053  lui         $t2, 0x53
    ctx->pc = 0x49fc70u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)83 << 16));
    // 0x49fc74: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x49fc74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x49fc78: 0x3c1e1000  lui         $fp, 0x1000
    ctx->pc = 0x49fc78u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)4096 << 16));
    // 0x49fc7c: 0x37de0001  ori         $fp, $fp, 0x1
    ctx->pc = 0x49fc7cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)1);
    // 0x49fc80: 0x707ea389  pcpyld      $s4, $v1, $fp
    ctx->pc = 0x49fc80u;
    SET_GPR_VEC(ctx, 20, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 30)));
    // 0x49fc84: 0x258cf720  addiu       $t4, $t4, -0x8E0
    ctx->pc = 0x49fc84u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294965024));
    // 0x49fc88: 0x3c1e1000  lui         $fp, 0x1000
    ctx->pc = 0x49fc88u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)4096 << 16));
    // 0x49fc8c: 0x37de000a  ori         $fp, $fp, 0xA
    ctx->pc = 0x49fc8cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)10);
    // 0x49fc90: 0x254af740  addiu       $t2, $t2, -0x8C0
    ctx->pc = 0x49fc90u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294965056));
    // 0x49fc94: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x49fc94u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x49fc98: 0x707eab89  pcpyld      $s5, $v1, $fp
    ctx->pc = 0x49fc98u;
    SET_GPR_VEC(ctx, 21, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 30)));
    // 0x49fc9c: 0x3c1e1500  lui         $fp, 0x1500
    ctx->pc = 0x49fc9cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)5376 << 16));
    // 0x49fca0: 0x1ef438  dsll        $fp, $fp, 16
    ctx->pc = 0x49fca0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) << 16);
    // 0x49fca4: 0x37de1100  ori         $fp, $fp, 0x1100
    ctx->pc = 0x49fca4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)4352);
    // 0x49fca8: 0x1ef438  dsll        $fp, $fp, 16
    ctx->pc = 0x49fca8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) << 16);
    // 0x49fcac: 0x3c090053  lui         $t1, 0x53
    ctx->pc = 0x49fcacu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)83 << 16));
    // 0x49fcb0: 0x707e9b89  pcpyld      $s3, $v1, $fp
    ctx->pc = 0x49fcb0u;
    SET_GPR_VEC(ctx, 19, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 30)));
    // 0x49fcb4: 0x2529f730  addiu       $t1, $t1, -0x8D0
    ctx->pc = 0x49fcb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294965040));
    // 0x49fcb8: 0x3c1e1700  lui         $fp, 0x1700
    ctx->pc = 0x49fcb8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)5888 << 16));
    // 0x49fcbc: 0x1ef438  dsll        $fp, $fp, 16
    ctx->pc = 0x49fcbcu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) << 16);
    // 0x49fcc0: 0x37de1000  ori         $fp, $fp, 0x1000
    ctx->pc = 0x49fcc0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)4096);
    // 0x49fcc4: 0x1ef438  dsll        $fp, $fp, 16
    ctx->pc = 0x49fcc4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) << 16);
    // 0x49fcc8: 0x3c0d0053  lui         $t5, 0x53
    ctx->pc = 0x49fcc8u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)83 << 16));
    // 0x49fccc: 0x707e9389  pcpyld      $s2, $v1, $fp
    ctx->pc = 0x49fcccu;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 30)));
    // 0x49fcd0: 0x3c0b0053  lui         $t3, 0x53
    ctx->pc = 0x49fcd0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)83 << 16));
    // 0x49fcd4: 0x3c1e1100  lui         $fp, 0x1100
    ctx->pc = 0x49fcd4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)4352 << 16));
    // 0x49fcd8: 0x25adf710  addiu       $t5, $t5, -0x8F0
    ctx->pc = 0x49fcd8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294965008));
    // 0x49fcdc: 0xe5e1f830  swc1        $f1, -0x7D0($t7)
    ctx->pc = 0x49fcdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4294965296), bits); }
    // 0x49fce0: 0x73c38b89  pcpyld      $s1, $fp, $v1
    ctx->pc = 0x49fce0u;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 30), GPR_VEC(ctx, 3)));
    // 0x49fce4: 0x25eff830  addiu       $t7, $t7, -0x7D0
    ctx->pc = 0x49fce4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294965296));
    // 0x49fce8: 0x3c070053  lui         $a3, 0x53
    ctx->pc = 0x49fce8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)83 << 16));
    // 0x49fcec: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x49fcecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x49fcf0: 0x256bf7a0  addiu       $t3, $t3, -0x860
    ctx->pc = 0x49fcf0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294965152));
    // 0x49fcf4: 0x7dd80000  sq          $t8, 0x0($t6)
    ctx->pc = 0x49fcf4u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 24));
    // 0x49fcf8: 0x3c1e1000  lui         $fp, 0x1000
    ctx->pc = 0x49fcf8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)4096 << 16));
    // 0x49fcfc: 0x41043  sra         $v0, $a0, 1
    ctx->pc = 0x49fcfcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 1));
    // 0x49fd00: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x49fd00u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x49fd04: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x49fd04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x49fd08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x49fd08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x49fd0c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x49fd0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x49fd10: 0x7d970000  sq          $s7, 0x0($t4)
    ctx->pc = 0x49fd10u;
    WRITE128(ADD32(GPR_U32(ctx, 12), 0), GPR_VEC(ctx, 23));
    // 0x49fd14: 0x7d560000  sq          $s6, 0x0($t2)
    ctx->pc = 0x49fd14u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 22));
    // 0x49fd18: 0x3c080053  lui         $t0, 0x53
    ctx->pc = 0x49fd18u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)83 << 16));
    // 0x49fd1c: 0x7d340000  sq          $s4, 0x0($t1)
    ctx->pc = 0x49fd1cu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 20));
    // 0x49fd20: 0x24e7f700  addiu       $a3, $a3, -0x900
    ctx->pc = 0x49fd20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964992));
    // 0x49fd24: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x49fd24u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x49fd28: 0x707e8389  pcpyld      $s0, $v1, $fp
    ctx->pc = 0x49fd28u;
    SET_GPR_VEC(ctx, 16, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 30)));
    // 0x49fd2c: 0x3c060053  lui         $a2, 0x53
    ctx->pc = 0x49fd2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)83 << 16));
    // 0x49fd30: 0x2508f880  addiu       $t0, $t0, -0x780
    ctx->pc = 0x49fd30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294965376));
    // 0x49fd34: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x49fd34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
    // 0x49fd38: 0x3c1e0200  lui         $fp, 0x200
    ctx->pc = 0x49fd38u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)512 << 16));
    // 0x49fd3c: 0x37de01e1  ori         $fp, $fp, 0x1E1
    ctx->pc = 0x49fd3cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)481);
    // 0x49fd40: 0x1ef438  dsll        $fp, $fp, 16
    ctx->pc = 0x49fd40u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) << 16);
    // 0x49fd44: 0x37de0300  ori         $fp, $fp, 0x300
    ctx->pc = 0x49fd44u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)768);
    // 0x49fd48: 0x1ef438  dsll        $fp, $fp, 16
    ctx->pc = 0x49fd48u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) << 16);
    // 0x49fd4c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x49fd4cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x49fd50: 0x3c050053  lui         $a1, 0x53
    ctx->pc = 0x49fd50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)83 << 16));
    // 0x49fd54: 0x24c6f890  addiu       $a2, $a2, -0x770
    ctx->pc = 0x49fd54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965392));
    // 0x49fd58: 0xc78382e8  lwc1        $f3, -0x7D18($gp)
    ctx->pc = 0x49fd58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x49fd5c: 0x2482f8b0  addiu       $v0, $a0, -0x750
    ctx->pc = 0x49fd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965424));
    // 0x49fd60: 0x3c190053  lui         $t9, 0x53
    ctx->pc = 0x49fd60u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)83 << 16));
    // 0x49fd64: 0x707e1b89  pcpyld      $v1, $v1, $fp
    ctx->pc = 0x49fd64u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 30)));
    // 0x49fd68: 0x24a5f870  addiu       $a1, $a1, -0x790
    ctx->pc = 0x49fd68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965360));
    // 0x49fd6c: 0x2724f8a0  addiu       $a0, $t9, -0x760
    ctx->pc = 0x49fd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 25), 4294965408));
    // 0x49fd70: 0xc78482ec  lwc1        $f4, -0x7D14($gp)
    ctx->pc = 0x49fd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x49fd74: 0x3c0a0053  lui         $t2, 0x53
    ctx->pc = 0x49fd74u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)83 << 16));
    // 0x49fd78: 0x2409000c  addiu       $t1, $zero, 0xC
    ctx->pc = 0x49fd78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x49fd7c: 0xe5e00004  swc1        $f0, 0x4($t7)
    ctx->pc = 0x49fd7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4), bits); }
    // 0x49fd80: 0x7db50000  sq          $s5, 0x0($t5)
    ctx->pc = 0x49fd80u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 0), GPR_VEC(ctx, 21));
    // 0x49fd84: 0x7d730000  sq          $s3, 0x0($t3)
    ctx->pc = 0x49fd84u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 19));
    // 0x49fd88: 0x7cf20000  sq          $s2, 0x0($a3)
    ctx->pc = 0x49fd88u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 18));
    // 0x49fd8c: 0x7d110000  sq          $s1, 0x0($t0)
    ctx->pc = 0x49fd8cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 17));
    // 0x49fd90: 0x7cd00000  sq          $s0, 0x0($a2)
    ctx->pc = 0x49fd90u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 16));
    // 0x49fd94: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x49fd94u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x49fd98: 0xe483000c  swc1        $f3, 0xC($a0)
    ctx->pc = 0x49fd98u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x49fd9c: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x49fd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x49fda0: 0xe463f8b0  swc1        $f3, -0x750($v1)
    ctx->pc = 0x49fda0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x52F8B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x52F8B0u, _value); } while (0); }
    // 0x49fda4: 0xe443000c  swc1        $f3, 0xC($v0)
    ctx->pc = 0x49fda4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x49fda8: 0xe724f8a0  swc1        $f4, -0x760($t9)
    ctx->pc = 0x49fda8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 4294965408), bits); }
    // 0x49fdac: 0xe4840008  swc1        $f4, 0x8($a0)
    ctx->pc = 0x49fdacu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x49fdb0: 0xe4430004  swc1        $f3, 0x4($v0)
    ctx->pc = 0x49fdb0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x49fdb4: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x49fdb4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x49fdb8: 0xe4840004  swc1        $f4, 0x4($a0)
    ctx->pc = 0x49fdb8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x49fdbc: 0xaf80879c  sw          $zero, -0x7864($gp)
    ctx->pc = 0x49fdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936476), GPR_U32(ctx, 0));
label_49fdc0:
    // 0x49fdc0: 0x8f86879c  lw          $a2, -0x7864($gp)
    ctx->pc = 0x49fdc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936476)));
    // 0x49fdc4: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x49fdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x49fdc8: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x49fdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x49fdcc: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x49fdccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x49fdd0: 0x892818  mult        $a1, $a0, $t1
    ctx->pc = 0x49fdd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x49fdd4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x49fdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x49fdd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x49fdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x49fddc: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x49fddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x49fde0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x49fde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x49fde4: 0x2c4201ff  sltiu       $v0, $v0, 0x1FF
    ctx->pc = 0x49fde4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)511) ? 1 : 0);
    // 0x49fde8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x49FDE8u;
    {
        const bool branch_taken_0x49fde8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49FDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FDE8u;
        // 0x49fdec: 0xaf84879c  sw          $a0, -0x7864($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936476), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49fde8) {
            ctx->pc = 0x49FDC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49fdc0;
        }
    }
    ctx->pc = 0x49FDF0u;
    // 0x49fdf0: 0xaf86879c  sw          $a2, -0x7864($gp)
    ctx->pc = 0x49fdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936476), GPR_U32(ctx, 6));
    // 0x49fdf4: 0xaf808798  sw          $zero, -0x7868($gp)
    ctx->pc = 0x49fdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936472), GPR_U32(ctx, 0));
    // 0x49fdf8: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x49fdf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x49fdfc: 0x0  nop
    ctx->pc = 0x49fdfcu;
    // NOP
label_49fe00:
    // 0x49fe00: 0x8f888798  lw          $t0, -0x7868($gp)
    ctx->pc = 0x49fe00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936472)));
    // 0x49fe04: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x49fe04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x49fe08: 0x25030010  addiu       $v1, $t0, 0x10
    ctx->pc = 0x49fe08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x49fe0c: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x49fe0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x49fe10: 0x862818  mult        $a1, $a0, $a2
    ctx->pc = 0x49fe10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x49fe14: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x49fe14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x49fe18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x49fe18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x49fe1c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x49fe1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x49fe20: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x49fe20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x49fe24: 0x2c4201ff  sltiu       $v0, $v0, 0x1FF
    ctx->pc = 0x49fe24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)511) ? 1 : 0);
    // 0x49fe28: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x49FE28u;
    {
        const bool branch_taken_0x49fe28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49FE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FE28u;
        // 0x49fe2c: 0xaf848798  sw          $a0, -0x7868($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936472), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49fe28) {
            ctx->pc = 0x49FE00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49fe00;
        }
    }
    ctx->pc = 0x49FE30u;
    // 0x49fe30: 0x3c1e1100  lui         $fp, 0x1100
    ctx->pc = 0x49fe30u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)4352 << 16));
    // 0x49fe34: 0x1ef438  dsll        $fp, $fp, 16
    ctx->pc = 0x49fe34u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) << 16);
    // 0x49fe38: 0x37de1100  ori         $fp, $fp, 0x1100
    ctx->pc = 0x49fe38u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)4352);
    // 0x49fe3c: 0x1ef438  dsll        $fp, $fp, 16
    ctx->pc = 0x49fe3cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) << 16);
    // 0x49fe40: 0x3c091100  lui         $t1, 0x1100
    ctx->pc = 0x49fe40u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4352 << 16));
    // 0x49fe44: 0x713e2b89  pcpyld      $a1, $t1, $fp
    ctx->pc = 0x49fe44u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 30)));
    // 0x49fe48: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x49fe48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
    // 0x49fe4c: 0x2484f770  addiu       $a0, $a0, -0x890
    ctx->pc = 0x49fe4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965104));
    // 0x49fe50: 0x3c1e1100  lui         $fp, 0x1100
    ctx->pc = 0x49fe50u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)4352 << 16));
    // 0x49fe54: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x49fe54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49fe58: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x49fe58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x49fe5c: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x49fe5cu;
    do { __m128i _value = (GPR_VEC(ctx, 5)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x52F770u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x52F770u, _value); } while (0);
    // 0x49fe60: 0x713e3b89  pcpyld      $a3, $t1, $fp
    ctx->pc = 0x49fe60u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 30)));
    // 0x49fe64: 0x2463f7b0  addiu       $v1, $v1, -0x850
    ctx->pc = 0x49fe64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965168));
    // 0x49fe68: 0x3c1e1000  lui         $fp, 0x1000
    ctx->pc = 0x49fe68u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)4096 << 16));
    // 0x49fe6c: 0x37de0001  ori         $fp, $fp, 0x1
    ctx->pc = 0x49fe6cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)1);
    // 0x49fe70: 0x7c670000  sq          $a3, 0x0($v1)
    ctx->pc = 0x49fe70u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 7));
    // 0x49fe74: 0x3c096c01  lui         $t1, 0x6C01
    ctx->pc = 0x49fe74u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)27649 << 16));
    // 0x49fe78: 0x352903d4  ori         $t1, $t1, 0x3D4
    ctx->pc = 0x49fe78u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)980);
    // 0x49fe7c: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x49fe7cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x49fe80: 0x35290100  ori         $t1, $t1, 0x100
    ctx->pc = 0x49fe80u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)256);
    // 0x49fe84: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x49fe84u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x49fe88: 0x35290404  ori         $t1, $t1, 0x404
    ctx->pc = 0x49fe88u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1028);
    // 0x49fe8c: 0x2542f790  addiu       $v0, $t2, -0x870
    ctx->pc = 0x49fe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294965136));
    // 0x49fe90: 0xaf888798  sw          $t0, -0x7868($gp)
    ctx->pc = 0x49fe90u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936472), GPR_U32(ctx, 8));
    // 0x49fe94: 0xad40f790  sw          $zero, -0x870($t2)
    ctx->pc = 0x49fe94u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4294965136), GPR_U32(ctx, 0));
    // 0x49fe98: 0x713e3389  pcpyld      $a2, $t1, $fp
    ctx->pc = 0x49fe98u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 30)));
    // 0x49fe9c: 0x2445008f  addiu       $a1, $v0, 0x8F
    ctx->pc = 0x49fe9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 143));
    // 0x49fea0: 0x2444fff0  addiu       $a0, $v0, -0x10
    ctx->pc = 0x49fea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x49fea4: 0x7c46fff0  sq          $a2, -0x10($v0)
    ctx->pc = 0x49fea4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 4294967280), GPR_VEC(ctx, 6));
    // 0x49fea8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x49fea8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x49feac: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x49feacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x49feb0: 0xc10f644  jal         func_43D910
    ctx->pc = 0x49FEB0u;
    SET_GPR_U32(ctx, 31, 0x49FEB8u);
    ctx->pc = 0x49FEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49FEB0u;
    // 0x49feb4: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D910u, 0x49FEB0u, 0x49FEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49FEB8u;
label_49feb8:
    // 0x49feb8: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x49feb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x49febc: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x49febcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x49fec0: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x49fec0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x49fec4: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x49fec4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x49fec8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x49fec8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x49fecc: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x49feccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x49fed0: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x49fed0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49fed4: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x49fed4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49fed8: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x49fed8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49fedc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49fedcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49fee0: 0x3e00008  jr          $ra
    ctx->pc = 0x49FEE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49FEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FEE0u;
        // 0x49fee4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49FEE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49FEE8u;
}
